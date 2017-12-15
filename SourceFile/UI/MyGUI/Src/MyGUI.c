

/*--------------------------------------------头文件-------------------------------------*/
#include "MyGUI.h"
#include "TFT.h"
#include "ASCII8X16.h"
/*---------------------------------------------常数--------------------------------------*/

/*--------------------------------------------宏定义-------------------------------------*/

/*---------------------------------------------变量--------------------------------------*/


/*---------------------------------------------类型--------------------------------------*/



/*---------------------------------------------函数--------------------------------------*/




/*----------------------------------------------------------------------------------------------
--描述      :     快速ALPHA BLENDING算法
--参数      :     SourceColor : 源颜色
                  Targetcolor : 目标颜色
                  Transparent : 透明程度(0~32)
--返回值    :     混合后的颜色
----------------------------------------------------------------------------------------------*/
uint16_t GUITransparent656(uint16_t SourceColor,uint16_t Targetcolor,uint8_t Transparent)
{
	u32 SourceColor2;
	u32 Targetcolor2;	 
	//Convert to 32bit |-----GGGGGG-----RRRRR------BBBBB|
	SourceColor2=((SourceColor<<16)|SourceColor)&0x07E0F81F;
	Targetcolor2=((Targetcolor<<16)|Targetcolor)&0x07E0F81F;   

	Targetcolor2=((((Targetcolor2-SourceColor2)*Transparent)>>5)+SourceColor2)&0x07E0F81F;
	return (Targetcolor2>>16)|Targetcolor2;  
}  

/*----------------------------------------------------------------------------------------------
--描述      :     对指定区域进行alphablend
--参数      :     x,y,width,height:区域设置
                  color:alphablend的颜色
                  color:alphablend的颜色
--返回值    :     混合后的颜色
----------------------------------------------------------------------------------------------*/
void GUITransparentBlock(u16 X,u16 Y,u16 width,u16 height,u16 color,u8 aval)
{
	u16 i,j;
	u16 tempcolor;
	for(i=0;i<width;i++)
	{
		for(j=0;j<height;j++)
		{
                  tempcolor=LCDReadPointRGB(X,Y+j);
                  tempcolor=GUITransparent656(tempcolor,color,aval);
                  LCDDrawPoint(X+i,Y+j,tempcolor);
		}
	}
}
/*----------------------------------------------------------------------------------------------
--描述      :     显示一个ASCII字符
--参数      :     X,Y         :     显示坐标
                  color       :     字的颜色
                  Backlicolor :     字背景的颜色
                  Backl       :     是否需要背景色 1 使用  0 不使用
--返回值    :     无
----------------------------------------------------------------------------------------------*/
void GUICharacter(uint16_t X, uint16_t Y,uint8_t Character, uint16_t Color,uint16_t Backlicolor,uint16_t Backl)
{  
      uint16_t  XStart ,YStart, temp ,YOffset=8,XOffset=0;

      Character-= 0x20;

      for(YStart=0 ; YStart< 16 ; YStart++ )
      {
            if(YStart>=8)
            {
                  YOffset=0;
                  XOffset=8;
            }
            if(YStart+Y<220)
            {
                  temp = nAsciiDot[Character*16+YStart] ;
                  for(XStart=0 ; XStart<8 ; XStart++ )
                  {
                        if(X+XStart<176)
                        {
                              if((temp&(0x80>>(XStart))) == (0x80>>(XStart))  )	//取出点 
                              {
                           
                                    LCDDrawPoint( Y+YStart-XOffset,X+XStart+YOffset,Color) ;		//写入点阵
                              }
                              else if(Backl)
                              {
                                    LCDDrawPoint(Y+YStart-XOffset,X+XStart+YOffset,Backlicolor) ;  //写入背景色
                              }
                        }
                  }
            }
            
      }
}


void GUIString(uint16_t X, uint16_t Y,uint8_t *StringPointer, uint16_t Color,uint16_t Backlicolor,uint16_t Backl)
{
      uint8_t X0=X;
      while((*StringPointer<='~')&&(*StringPointer>=' '))
      {
            if(X>=220)
            {
                  X=X0;
                  Y-=16;
            }
            if(Y>=176)
                  break;
            
            GUICharacter(Y,X,*StringPointer,Color,Backlicolor,Backl);
            X+=8;
            StringPointer++;
      }
}


void GUISelectLabel(uint16_t X,uint16_t Y,uint16_t Color,uint16_t SelectColor)
{
      //LCDDrawLine(uint8_t XStart,uint8_t YStart,uint8_t XEnd,uint8_t YEnd,uint16_t Color)
}


































































































































































































































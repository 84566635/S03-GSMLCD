// ------------------  ASCII字模的数据表 ------------------------ //
// 码表从0x20~0x7e                                                //
// 字库: F:\工具\取模\12864yejingqumo\Asc6X12E.dat 横向取模左高位 //
// -------------------------------------------------------------- //
unsigned char code nAsciiDot[] =              // ASCII
{
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // - -
	0x00,0x00,0x00,0x00,

	0x00,0x10,0x10,0x10,0x10,0x10,0x00,0x00,  // -!-
	0x10,0x00,0x00,0x00,

	0x00,0x6C,0x48,0x48,0x00,0x00,0x00,0x00,  // -"-
	0x00,0x00,0x00,0x00,

	0x00,0x14,0x14,0x28,0x7C,0x28,0x7C,0x28,  // -#-
	0x50,0x50,0x00,0x00,

	0x00,0x10,0x38,0x40,0x40,0x38,0x48,0x70,  // -$-
	0x10,0x10,0x00,0x00,

	0x00,0x20,0x50,0x20,0x0C,0x70,0x08,0x14,  // -%-
	0x08,0x00,0x00,0x00,

	0x00,0x00,0x00,0x18,0x20,0x20,0x54,0x48,  // -&-
	0x34,0x00,0x00,0x00,

	0x00,0x10,0x10,0x10,0x10,0x00,0x00,0x00,  // -'-
	0x00,0x00,0x00,0x00,

	0x00,0x08,0x08,0x10,0x10,0x10,0x10,0x10,  // -(-
	0x10,0x08,0x08,0x00,

	0x00,0x20,0x20,0x10,0x10,0x10,0x10,0x10,  // -)-
	0x10,0x20,0x20,0x00,

	0x00,0x10,0x7C,0x10,0x28,0x28,0x00,0x00,  // -*-
	0x00,0x00,0x00,0x00,

	0x00,0x00,0x10,0x10,0x10,0xFC,0x10,0x10,  // -+-
	0x10,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,  // -,-
	0x10,0x30,0x20,0x00,

	0x00,0x00,0x00,0x00,0x00,0x7C,0x00,0x00,  // ---
	0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,  // -.-
	0x30,0x00,0x00,0x00,

	0x00,0x04,0x04,0x08,0x08,0x10,0x10,0x20,  // -/-
	0x20,0x40,0x00,0x00,

	0x00,0x38,0x44,0x44,0x44,0x44,0x44,0x44,  // -0-
	0x38,0x00,0x00,0x00,

	0x00,0x30,0x10,0x10,0x10,0x10,0x10,0x10,  // -1-
	0x7C,0x00,0x00,0x00,

	0x00,0x38,0x44,0x04,0x08,0x10,0x20,0x44,  // -2-
	0x7C,0x00,0x00,0x00,

	0x00,0x38,0x44,0x04,0x18,0x04,0x04,0x44,  // -3-
	0x38,0x00,0x00,0x00,

	0x00,0x0C,0x14,0x14,0x24,0x44,0x7C,0x04,  // -4-
	0x0C,0x00,0x00,0x00,

	0x00,0x3C,0x20,0x20,0x38,0x04,0x04,0x44,  // -5-
	0x38,0x00,0x00,0x00,

	0x00,0x1C,0x20,0x40,0x78,0x44,0x44,0x44,  // -6-
	0x38,0x00,0x00,0x00,

	0x00,0x7C,0x44,0x04,0x08,0x08,0x08,0x10,  // -7-
	0x10,0x00,0x00,0x00,

	0x00,0x38,0x44,0x44,0x38,0x44,0x44,0x44,  // -8-
	0x38,0x00,0x00,0x00,

	0x00,0x38,0x44,0x44,0x44,0x3C,0x04,0x08,  // -9-
	0x70,0x00,0x00,0x00,

	0x00,0x00,0x00,0x30,0x30,0x00,0x00,0x30,  // -:-
	0x30,0x00,0x00,0x00,

	0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x18,  // -;-
	0x30,0x20,0x00,0x00,

	0x00,0x00,0x0C,0x10,0x60,0x80,0x60,0x10,  // -<-
	0x0C,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x7C,0x00,0x7C,0x00,  // -=-
	0x00,0x00,0x00,0x00,

	0x00,0x00,0xC0,0x20,0x18,0x04,0x18,0x20,  // ->-
	0xC0,0x00,0x00,0x00,

	0x00,0x00,0x18,0x24,0x04,0x08,0x10,0x00,  // -?-
	0x30,0x00,0x00,0x00,

	0x38,0x44,0x44,0x4C,0x54,0x54,0x4C,0x40,  // -@-
	0x44,0x38,0x00,0x00,

	0x00,0x30,0x10,0x28,0x28,0x28,0x7C,0x44,  // -A-
	0xEC,0x00,0x00,0x00,

	0x00,0xF8,0x44,0x44,0x78,0x44,0x44,0x44,  // -B-
	0xF8,0x00,0x00,0x00,

	0x00,0x3C,0x44,0x40,0x40,0x40,0x40,0x44,  // -C-
	0x38,0x00,0x00,0x00,

	0x00,0xF0,0x48,0x44,0x44,0x44,0x44,0x48,  // -D-
	0xF0,0x00,0x00,0x00,

	0x00,0xFC,0x44,0x50,0x70,0x50,0x40,0x44,  // -E-
	0xFC,0x00,0x00,0x00,

	0x00,0x7C,0x20,0x28,0x38,0x28,0x20,0x20,  // -F-
	0x70,0x00,0x00,0x00,

	0x00,0x3C,0x44,0x40,0x40,0x4C,0x44,0x44,  // -G-
	0x38,0x00,0x00,0x00,

	0x00,0xEC,0x44,0x44,0x7C,0x44,0x44,0x44,  // -H-
	0xEC,0x00,0x00,0x00,

	0x00,0x7C,0x10,0x10,0x10,0x10,0x10,0x10,  // -I-
	0x7C,0x00,0x00,0x00,

	0x00,0x3C,0x08,0x08,0x08,0x48,0x48,0x48,  // -J-
	0x30,0x00,0x00,0x00,

	0x00,0xEC,0x44,0x48,0x50,0x70,0x48,0x44,  // -K-
	0xE4,0x00,0x00,0x00,

	0x00,0x70,0x20,0x20,0x20,0x20,0x24,0x24,  // -L-
	0x7C,0x00,0x00,0x00,

	0x00,0xEC,0x6C,0x6C,0x54,0x54,0x44,0x44,  // -M-
	0xEC,0x00,0x00,0x00,

	0x00,0xEC,0x64,0x64,0x54,0x54,0x54,0x4C,  // -N-
	0xEC,0x00,0x00,0x00,

	0x00,0x38,0x44,0x44,0x44,0x44,0x44,0x44,  // -O-
	0x38,0x00,0x00,0x00,

	0x00,0x78,0x24,0x24,0x24,0x38,0x20,0x20,  // -P-
	0x70,0x00,0x00,0x00,

	0x00,0x38,0x44,0x44,0x44,0x44,0x44,0x44,  // -Q-
	0x38,0x1C,0x00,0x00,

	0x00,0xF8,0x44,0x44,0x44,0x78,0x48,0x44,  // -R-
	0xE0,0x00,0x00,0x00,

	0x00,0x34,0x4C,0x40,0x38,0x04,0x04,0x64,  // -S-
	0x58,0x00,0x00,0x00,

	0x00,0xFC,0x90,0x10,0x10,0x10,0x10,0x10,  // -T-
	0x38,0x00,0x00,0x00,

	0x00,0xEC,0x44,0x44,0x44,0x44,0x44,0x44,  // -U-
	0x38,0x00,0x00,0x00,

	0x00,0xEC,0x44,0x44,0x28,0x28,0x28,0x10,  // -V-
	0x10,0x00,0x00,0x00,

	0x00,0xEC,0x44,0x44,0x54,0x54,0x54,0x54,  // -W-
	0x28,0x00,0x00,0x00,

	0x00,0xC4,0x44,0x28,0x10,0x10,0x28,0x44,  // -X-
	0xC4,0x00,0x00,0x00,

	0x00,0xEC,0x44,0x28,0x28,0x10,0x10,0x10,  // -Y-
	0x38,0x00,0x00,0x00,

	0x00,0x7C,0x44,0x08,0x10,0x10,0x20,0x44,  // -Z-
	0x7C,0x00,0x00,0x00,

	0x00,0x38,0x20,0x20,0x20,0x20,0x20,0x20,  // -[-
	0x20,0x20,0x38,0x00,

	0x00,0x40,0x20,0x20,0x20,0x10,0x10,0x08,  // -\-
	0x08,0x08,0x00,0x00,

	0x00,0x38,0x08,0x08,0x08,0x08,0x08,0x08,  // -]-
	0x08,0x08,0x38,0x00,

	0x00,0x10,0x10,0x28,0x44,0x00,0x00,0x00,  // -^-
	0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // -_-
	0x00,0x00,0x00,0xFC,

	0x00,0x10,0x08,0x00,0x00,0x00,0x00,0x00,  // -`-
	0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x38,0x44,0x3C,0x44,0x44,  // -a-
	0x3C,0x00,0x00,0x00,

	0x00,0xC0,0x40,0x58,0x64,0x44,0x44,0x44,  // -b-
	0xF8,0x00,0x00,0x00,

	0x00,0x00,0x00,0x3C,0x44,0x40,0x40,0x44,  // -c-
	0x38,0x00,0x00,0x00,

	0x00,0x0C,0x04,0x34,0x4C,0x44,0x44,0x44,  // -d-
	0x3C,0x00,0x00,0x00,

	0x00,0x00,0x00,0x38,0x44,0x7C,0x40,0x40,  // -e-
	0x3C,0x00,0x00,0x00,

	0x00,0x1C,0x20,0x7C,0x20,0x20,0x20,0x20,  // -f-
	0x7C,0x00,0x00,0x00,

	0x00,0x00,0x00,0x34,0x4C,0x44,0x44,0x44,  // -g-
	0x3C,0x04,0x38,0x00,

	0x00,0xC0,0x40,0x58,0x64,0x44,0x44,0x44,  // -h-
	0xEC,0x00,0x00,0x00,

	0x00,0x10,0x00,0x70,0x10,0x10,0x10,0x10,  // -i-
	0x7C,0x00,0x00,0x00,

	0x00,0x10,0x00,0x78,0x08,0x08,0x08,0x08,  // -j-
	0x08,0x08,0x70,0x00,

	0x00,0xC0,0x40,0x5C,0x48,0x70,0x50,0x48,  // -k-
	0xDC,0x00,0x00,0x00,

	0x00,0x30,0x10,0x10,0x10,0x10,0x10,0x10,  // -l-
	0x7C,0x00,0x00,0x00,

	0x00,0x00,0x00,0xE8,0x54,0x54,0x54,0x54,  // -m-
	0xFC,0x00,0x00,0x00,

	0x00,0x00,0x00,0xD8,0x64,0x44,0x44,0x44,  // -n-
	0xEC,0x00,0x00,0x00,

	0x00,0x00,0x00,0x38,0x44,0x44,0x44,0x44,  // -o-
	0x38,0x00,0x00,0x00,

	0x00,0x00,0x00,0xD8,0x64,0x44,0x44,0x44,  // -p-
	0x78,0x40,0xE0,0x00,

	0x00,0x00,0x00,0x34,0x4C,0x44,0x44,0x44,  // -q-
	0x3C,0x04,0x0C,0x00,

	0x00,0x00,0x00,0x6C,0x30,0x20,0x20,0x20,  // -r-
	0x7C,0x00,0x00,0x00,

	0x00,0x00,0x00,0x3C,0x44,0x38,0x04,0x44,  // -s-
	0x78,0x00,0x00,0x00,

	0x00,0x00,0x20,0x7C,0x20,0x20,0x20,0x20,  // -t-
	0x1C,0x00,0x00,0x00,

	0x00,0x00,0x00,0xCC,0x44,0x44,0x44,0x4C,  // -u-
	0x34,0x00,0x00,0x00,

	0x00,0x00,0x00,0xEC,0x44,0x44,0x28,0x28,  // -v-
	0x10,0x00,0x00,0x00,

	0x00,0x00,0x00,0xEC,0x44,0x54,0x54,0x54,  // -w-
	0x28,0x00,0x00,0x00,

	0x00,0x00,0x00,0xCC,0x48,0x30,0x30,0x48,  // -x-
	0xCC,0x00,0x00,0x00,

	0x00,0x00,0x00,0xEC,0x44,0x24,0x28,0x18,  // -y-
	0x10,0x10,0x78,0x00,

	0x00,0x00,0x00,0x7C,0x48,0x10,0x20,0x44,  // -z-
	0x7C,0x00,0x00,0x00,

	0x00,0x08,0x10,0x10,0x10,0x10,0x20,0x10,  // -{-
	0x10,0x10,0x08,0x00,

	0x00,0x10,0x10,0x10,0x10,0x10,0x10,0x10,  // -|-
	0x10,0x10,0x00,0x00,

	0x00,0x20,0x10,0x10,0x10,0x10,0x08,0x10,  // -}-
	0x10,0x10,0x20,0x00,

	0x00,0x00,0x00,0x00,0x00,0x24,0x58,0x00,  // -~-
	0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x24,0x58,0x00,  // --
	0x00,0x00,0x00,0x00,
};

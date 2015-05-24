// original binary (from gps44.bin) to compare with our assembler output

// Entry
	0x0000, 0x0000,
	0x0002, 0xD004,
	0x0004, 0xC002,
	0x0006, 0x8500,

// Ready
	0x0008, 0xE002,

// Main
	0x000A, 0xC002,
	0x000C, 0x9300,

	0x000E, 0x0000,
	0x0010, 0x9300,
	0x0012, 0x0000,
	0x0014, 0x9300,
	0x0016, 0x0000,
	0x0018, 0x9300,
	0x001a, 0x0000,
	0x001c, 0x9300,
	0x001e, 0x0000,
	0x0020, 0x9300,
	0x0022, 0x0000,
	0x0024, 0x9300,
	0x0026, 0x0000,
	0x0028, 0x9300,
	0x002a, 0x0000,
	0x002c, 0x9300,
	0x002e, 0x0000,
	0x0030, 0x9300,
	0x0032, 0x0000,
	0x0034, 0x9300,
	0x0036, 0x0000,
	0x0038, 0x9300,
	0x003a, 0x0000,
	0x003c, 0x9300,
	
	0x003E, 0xB046,
	0x0040, 0x00D4,
	0x0042, 0x0000,
	0x0044, 0xA320,
	0x0046, 0xB04E,
	0x0048, 0x0100,
	0x004A, 0x0001,
	0x004C, 0xA320,
	0x004E, 0xB056,
	0x0050, 0x012C,
	0x0052, 0x0002,
	0x0054, 0xA320,
	0x0056, 0xB05E,
	0x0058, 0x0158,
	0x005A, 0x0003,
	0x005C, 0xA320,
	0x005E, 0xB066,
	0x0060, 0x0184,
	0x0062, 0x0004,
	0x0064, 0xA320,
	0x0066, 0xB06E,
	0x0068, 0x01B0,
	0x006A, 0x0005,
	0x006C, 0xA320,
	0x006E, 0xB076,
	0x0070, 0x01DC,
	0x0072, 0x0006,
	0x0074, 0xA320,
	0x0076, 0xB07E,
	0x0078, 0x0208,
	0x007A, 0x0007,
	0x007C, 0xA320,
	0x007E, 0xB086,
	0x0080, 0x0234,
	0x0082, 0x0008,
	0x0084, 0xA320,
	0x0086, 0xB08E,
	0x0088, 0x0260,
	0x008A, 0x0009,
	0x008C, 0xA320,
	0x008E, 0xB096,
	0x0090, 0x028C,
	0x0092, 0x000A,
	0x0094, 0xA320,
	0x0096, 0xB09E,
	0x0098, 0x02B8,
	0x009A, 0x000B,
	0x009C, 0xA320,
	0x009E, 0xB00A,

	0x00A0, 0xE001,
	0x00A2, 0xC008,
	0x00A4, 0x9100,
	0x00A6, 0x00B4,
	0x00A8,	0x8800,
	0x00AA, 0x9400,
	0x00AC, 0x0008,
	0x00AE, 0x9E00,
	0x00B0, 0x9E00,
	0x00B2, 0x8080,

// Commands
	0x00B4, 0x04BC,
	0x00B6, 0x04C0,
	0x00B8, 0x04C6,
	0x00BA, 0x04E8,
	0x00BC, 0x050A,
	0x00BE, 0x0520,
	0x00C0, 0x0536,
	0x00C2, 0x0540,
	0x00C4, 0x054A,
	0x00C6, 0x0558,
	0x00C8, 0x057C,
	0x00CA, 0x0586,
	0x00CC, 0x05C0,
	0x00CE, 0x05DE,
	0x00D0, 0x0624,
	0x00D2, 0x062A,

// 0x00D4 Chans struct size=0x2C*12

// GetChanPtr
	0x02E4, 0x002C,
	0x02E6, 0x8A00,
	0x02E8, 0x00D4,
	0x02EA, 0x8880,

// GetCount
	0x02EC, 0x0000,
	0x02EE, 0x9300,

// GetCount2

#if IB == 14
// original 14-bit version
	0x02F0, 0x8100,
	0x02F2, 0x9100,
	0x02F4, 0x8800,
#else
// modified 15-bit version
	0x02F0, 0x8000,		// nop
	0x02F2, 0x8000,		// nop
	0x02F4, 0x9300,		// rdBit
#endif

	0x02F6, 0x9300,
	0x02F8, 0x9300,
	0x02FA, 0x9300,
	0x02FC, 0x9300,
	0x02FE, 0x9300,
	0x0300, 0x9300,
	0x0302, 0x9300,
	0x0304, 0x9300,
	0x0306, 0x9300,
	0x0308, 0x9300,
	0x030A, 0x9300,
	0x030C, 0x9300,
	0x030E, 0x9300,
	0x0310, 0x9180,

// GetPower
	0x0312, 0xA2EC,
	0x0314, 0x8100,
	0x0316, 0x8A00,
	0x0318, 0xA2EC,
	0x031A, 0x8100,
	0x031C, 0x8A00,
	0x031E, 0x8880,

// Method
	0x0320, 0xD008,
	0x0322, 0x9E00,
	0x0324, 0xC001,
	0x0326, 0x9300,
	0x0328, 0x8100,
	0x032A, 0xA2F0,
	0x032C, 0xA2EC,
	0x032E, 0x8400,
	0x0330, 0x8400,
	0x0332, 0x9C00,
	0x0334, 0x8720,
	0x0336, 0x9500,
	0x0338, 0x8702,
	0x033A, 0x9500,
	0x033C, 0x8500,
	0x033E, 0x8A00,

// Method CloseLoop LO
	0x0340, 0xA6C8,
	0x0342, 0x9C00,
	0x0344, 0x8728,
	0x0346, 0x9400,
	0x0348, 0xA67A,
	0x034A, 0x8400,
	0x034C, 0x8400,
	0x034E, 0x9C00,
	0x0350, 0x8718,
	0x0352, 0xA63C,
	0x0354, 0xA66E,
	0x0356, 0x8400,
	0x0358, 0x8400,
	0x035A, 0x9C00,
	0x035C, 0x8718,
	0x035E, 0xA652,
	0x0360, 0x8500,
	0x0362, 0xA664,
	0x0364, 0x9C00,
	0x0366, 0x872A,
	0x0368, 0x9400,
	0x036A, 0xA67A,
	0x036C, 0xA66E,
	0x036E, 0x8500,
	0x0370, 0xD020,

	0x0372, 0xA312,
	0x0374, 0xA312,
	0x0376, 0x8900,

// Method CloseLoop CA
	0x0378, 0xA6C8,
	0x037A, 0x9C00,
	0x037C, 0x8724,
	0x037E, 0x9400,
	0x0380, 0xA67A,
	0x0382, 0x8400,
	0x0384, 0x8400,
	0x0386, 0x9C00,
	0x0388, 0x8710,
	0x038A, 0xA63C,
	0x038C, 0xA66E,
	0x038E, 0x8400,
	0x0390, 0x8400,
	0x0392, 0x9C00,
	0x0394, 0x8710,
	0x0396, 0xA652,
	0x0398, 0x8500,
	0x039A, 0xA664,
	0x039C, 0x9C00,
	0x039E, 0x8726,
	0x03A0, 0x9400,
	0x03A2, 0xA67A,
	0x03A4, 0xA66E,
	0x03A6, 0x8500,
	0x03A8, 0xD010,

	0x03AA, 0x9C00,
	0x03AC, 0x8706,
	0x03AE, 0x9400,
	0x03B0, 0x8400,
	0x03B2, 0x8900,
	0x03B4, 0xB3E2,
	0x03B6, 0x9C00,
	0x03B8, 0x8706,
	0x03BA, 0x9500,
	0x03BC, 0x8500,
	0x03BE, 0x9C00,
	0x03C0, 0x8700,
	0x03C2, 0x9400,
	0x03C4, 0xB3D6,
	0x03C6, 0x9C00,
	0x03C8, 0x8704,
	0x03CA, 0x9400,
	0x03CC, 0x8701,
	0x03CE, 0x9C00,
	0x03D0, 0x8704,
	0x03D2, 0x9500,
	0x03D4, 0x8500,

// NavEdge
	0x03D6, 0x0001,
	0x03D8, 0x9D00,
	0x03DA, 0x8700,
	0x03DC, 0x9500,
	0x03DE, 0x8500,
	0x03E0, 0x8080,

// NavSame
	0x03E2, 0x9C00,
	0x03E4, 0x8700,
	0x03E6, 0x8100,
	0x03E8, 0x9400,
	0x03EA, 0x0013,
	0x03EC, 0x8900,
	0x03EE, 0xB3FE,
	0x03F0, 0x9400,
	0x03F2, 0x8701,
	0x03F4, 0x9D00,
	0x03F6, 0x8700,
	0x03F8, 0x9500,
	0x03FA, 0x8500,
	0x03FC, 0x8580,

// NavSave
	0x03FE, 0x0000,
	0x0400, 0x8200,
	0x0402, 0x9500,
	0x0404, 0x8500,
	0x0406, 0x9C00,
	0x0408, 0x8702,
	0x040A, 0x9400,
	0x040C, 0x8100,
	0x040E, 0x8701,
	0x0410, 0x003F,
	0x0412, 0x8B00,
	0x0414, 0x9C00,
	0x0416, 0x8702,
	0x0418, 0x9500,
	0x041A, 0x8500,
	0x041C, 0x9200,
	0x041E, 0x9200,
	0x0420, 0x9200,
	0x0422, 0x9200,
	0x0424, 0x9100,
	0x0426, 0x9D00,
	0x0428, 0x8708,
	0x042A, 0x8800,
	0x042C, 0x8100,
	0x042E, 0x9E00,
	0x0430, 0x9400,
	0x0432, 0x9100,
	0x0434, 0x8800,
	0x0436, 0x9D00,
	0x0438, 0x9500,
	0x043A, 0x8500,
	0x043C, 0x8080,

// UploadSamples
	0x043E, 0xE008,
	0x0440, 0xE008,
	0x0442, 0xE008,
	0x0444, 0xE008,
	0x0446, 0xE008,
	0x0448, 0xE008,
	0x044A, 0xE008,
	0x044C, 0xE008,
	0x044E, 0xE008,
	0x0450, 0xE008,
	0x0452, 0xE008,
	0x0454, 0xE008,
	0x0456, 0xE008,
	0x0458, 0xE008,
	0x045A, 0xE008,
	0x045C, 0xE008,
	0x045E, 0x8080,

// UploadChan
	0x0460, 0xE010,
	0x0462, 0xE010,
	0x0464, 0xE010,
	0x0466, 0xE010,
	0x0468, 0xE010,
	0x046A, 0xE010,
	0x046C, 0xE010,
	0x046E, 0xE010,
	0x0470, 0xE010,
	0x0472, 0xE010,
	0x0474, 0xE010,
	0x0476, 0xE010,
	0x0478, 0xE010,
	0x047A, 0xE010,
	0x047C, 0xE010,
	0x047E, 0xE010,
	0x0480, 0xE010,
	0x0482, 0xE010,
	0x0484, 0xE010,
	0x0486, 0xE010,
	0x0488, 0xE010,
	0x048A, 0xE010,
	0x048C, 0x8080,

// UploadClock
	0x048E, 0xE010,
	0x0490, 0xE010,
	0x0492, 0x0000,
	0x0494, 0x9300,
	0x0496, 0x9300,
	0x0498, 0x9300,
	0x049A, 0x9300,
	0x049C, 0x9300,
	0x049E, 0x9300,
	0x04A0, 0x9300,
	0x04A2, 0x9300,
	0x04A4, 0x9300,
	0x04A6, 0x9300,
	0x04A8, 0x9300,
	0x04AA, 0x9300,
	0x04AC, 0x9300,
	0x04AE, 0x9300,
	0x04B0, 0x9300,
	0x04B2, 0x9300,
	0x04B4, 0xD001,
	0x04B6, 0x87A8,

// UploadGlitches
	0x04B8, 0xE010,
	0x04BA, 0x87AA,

// CmdSample
	0x04BC, 0xE004,
	0x04BE, 0x8080,

// CmdSetMask
	0x04C0, 0xC008,
	0x04C2, 0xD004,
	0x04C4, 0x8080,

// CmdSetRateCA
	0x04C6, 0xC008,
	0x04C8, 0xC008,
	0x04CA, 0xC008,
	0x04CC, 0x8300,
	0x04CE, 0x8800,
	0x04D0, 0x8200,
	0x04D2, 0x8400,
	0x04D4, 0x8400,
	0x04D6, 0xA2E4,
	0x04D8, 0x8710,
	0x04DA, 0x0000,
	0x04DC, 0x8200,
	0x04DE, 0xA652,
	0x04E0, 0x8500,
	0x04E2, 0xD008,
	0x04E4, 0xD010,
	0x04E6, 0x8080,

// CmdSetRateLO
	0x04E8, 0xC008,
	0x04EA, 0xC008,
	0x04EC, 0xC008,
	0x04EE, 0x8300,
	0x04F0, 0x8800,
	0x04F2, 0x8200,
	0x04F4, 0x8400,
	0x04F6, 0x8400,
	0x04F8, 0xA2E4,
	0x04FA, 0x8718,
	0x04FC, 0x0000,
	0x04FE, 0x8200,
	0x0500, 0xA652,
	0x0502, 0x8500,
	0x0504, 0xD008,
	0x0506, 0xD020,
	0x0508, 0x8080,

// CmdSetGainCA
	0x050A, 0xC008,
	0x050C, 0xC008,
	0x050E, 0xC008,
	0x0510, 0x8300,
	0x0512, 0x8800,
	0x0514, 0x8200,
	0x0516, 0xA2E4,
	0x0518, 0x8724,
	0x051A, 0xA656,
	0x051C, 0x8500,
	0x051E, 0x8080,

// CmdSetGainLO
	0x0520, 0xC008,
	0x0522, 0xC008,
	0x0524, 0xC008,
	0x0526, 0x8300,
	0x0528, 0x8800,
	0x052A, 0x8200,
	0x052C, 0xA2E4,
	0x052E, 0x8728,
	0x0530, 0xA656,
	0x0532, 0x8500,
	0x0534, 0x8080,

// CmdSetSV
	0x0536, 0xC008,
	0x0538, 0xD008,
	0x053A, 0xC008,
	0x053C, 0xD040,
	0x053E, 0x8080,

// CmdPause
	0x0540, 0xC008,
	0x0542, 0xD008,
	0x0544, 0xC008,
	0x0546, 0xD080,
	0x0548, 0x8080,

// CmdSetVCO
	0x054A, 0xC008,
	0x054C, 0xC008,
	0x054E, 0xC008,
	0x0550, 0x8300,
	0x0552, 0x8800,
	0x0554, 0xD002,
	0x0556, 0x8580,

// CmdGetSamples
	0x0558, 0xE001,
	0x055A, 0xA43E,
	0x055C, 0xA43E,
	0x055E, 0xA43E,
	0x0560, 0xA43E,
	0x0562, 0xA43E,
	0x0564, 0xA43E,
	0x0566, 0xA43E,
	0x0568, 0xA43E,
	0x056A, 0xA43E,
	0x056C, 0xA43E,
	0x056E, 0xA43E,
	0x0570, 0xA43E,
	0x0572, 0xA43E,
	0x0574, 0xA43E,
	0x0576, 0xA43E,
	0x0578, 0xA43E,
	0x057A, 0x8080,

// CmdGetChan
	0x057C, 0xC008,
	0x057E, 0xE001,
	0x0580, 0xA2E4,
	0x0582, 0xA460,
	0x0584, 0x8580,

// CmdGetClocks
	0x0586, 0xE001,
	0x0588, 0xC004,
	0x058A, 0x9300,
	0x058C, 0x9300,
	0x058E, 0x9300,
	0x0590, 0x9300,
	0x0592, 0x9300,
	0x0594, 0x9300,
	0x0596, 0x9300,
	0x0598, 0x9300,
	0x059A, 0x9300,
	0x059C, 0x9300,
	0x059E, 0x9300,
	0x05A0, 0x9300,
	0x05A2, 0xD001,
	0x05A4, 0x00D4,
	0x05A6, 0xA48E,
	0x05A8, 0xA48E,
	0x05AA, 0xA48E,
	0x05AC, 0xA48E,
	0x05AE, 0xA48E,
	0x05B0, 0xA48E,
	0x05B2, 0xA48E,
	0x05B4, 0xA48E,
	0x05B6, 0xA48E,
	0x05B8, 0xA48E,
	0x05BA, 0xA48E,
	0x05BC, 0xA48E,
	0x05BE, 0x8580,

// CmdGetGlitches
	0x05C0, 0xE001,
	0x05C2, 0x00D8,
	0x05C4, 0xA4B8,
	0x05C6, 0xA4B8,
	0x05C8, 0xA4B8,
	0x05CA, 0xA4B8,
	0x05CC, 0xA4B8,
	0x05CE, 0xA4B8,
	0x05D0, 0xA4B8,
	0x05D2, 0xA4B8,
	0x05D4, 0xA4B8,
	0x05D6, 0xA4B8,
	0x05D8, 0xA4B8,
	0x05DA, 0xA4B8,
	0x05DC, 0x8580,

// CmdSetDAC
	0x05DE, 0xC008,
	0x05E0, 0x6000,
	0x05E2, 0xA632,
	0x05E4, 0xA632,
	0x05E6, 0xA632,
	0x05E8, 0xA632,
	0x05EA, 0xA632,
	0x05EC, 0xA632,
	0x05EE, 0xA632,
	0x05F0, 0xA632,
	0x05F2, 0x8500,
	0x05F4, 0x9100,
	0x05F6, 0x9100,
	0x05F8, 0x9100,
	0x05FA, 0x9100,
	0x05FC, 0x9100,
	0x05FE, 0xA632,
	0x0600, 0xA632,
	0x0602, 0xA632,
	0x0604, 0xA632,
	0x0606, 0xA632,
	0x0608, 0xA632,
	0x060A, 0xA632,
	0x060C, 0xA632,
	0x060E, 0xA632,
	0x0610, 0xA632,
	0x0612, 0xA632,
	0x0614, 0xA632,
	0x0616, 0xA632,
	0x0618, 0xA632,
	0x061A, 0xA632,
	0x061C, 0xA632,
	0x061E, 0x8701,
	0x0620, 0xE100,
	0x0622, 0x8580,

// CmdSetLCD
	0x0624, 0xC008,
	0x0626, 0xD100,
	0x0628, 0x8080,

// CmdGetJoy
	0x062A, 0xE001,
	0x062C, 0xC010,
	0x062E, 0xD001,
	0x0630, 0x8080,

// DAC_bit
	0x0632, 0x9100,
	0x0634, 0xE100,
	0x0636, 0x8702,
	0x0638, 0xE100,
	0x063A, 0x8080,

// op_fetch64
	0x063C, 0x8100,
	0x063E, 0x8704,
	0x0640, 0xA644,
	0x0642, 0x8200,
	// fall through

// op_fetch32
	0x0644, 0x8100,
	0x0646, 0x9400,
	0x0648, 0x8200,
	0x064A, 0x8702,
	0x064C, 0x9400,
	0x064E, 0x8300,
	0x0650, 0x8880,

// op_store64
	0x0652, 0xA656,
	0x0654, 0x8704,
	// fall through

// op_store32
	0x0656, 0x8400,
	0x0658, 0x8300,
	0x065A, 0x8400,
	0x065C, 0x8702,
	0x065E, 0x9500,
	0x0660, 0x8500,
	0x0662, 0x9580,

// op_swap64
	0x0664, 0x8600,
	0x0666, 0x9E00,
	0x0668, 0x8600,
	0x066A, 0x9D00,
	0x066C, 0x8080,

// op_add64
	0x066E, 0x8600,
	0x0670, 0x8800,
	0x0672, 0x9E00,
	0x0674, 0x8840,
	0x0676, 0x9D00,
	0x0678, 0x8080,

// op_shl64_n
	0x067A, 0x06C6,
	0x067C, 0x8200,
	0x067E, 0x9100,
	0x0680, 0x8900,
	0x0682, 0x9E00,
	0x0684, 0x8080,
	0x0686, 0x9000,
	0x0688, 0x9000,
	0x068A, 0x9000,
	0x068C, 0x9000,
	0x068E, 0x9000,
	0x0690, 0x9000,
	0x0692, 0x9000,
	0x0694, 0x9000,
	0x0696, 0x9000,
	0x0698, 0x9000,
	0x069A, 0x9000,
	0x069C, 0x9000,
	0x069E, 0x9000,
	0x06A0, 0x9000,
	0x06A2, 0x9000,
	0x06A4, 0x9000,
	0x06A6, 0x9000,
	0x06A8, 0x9000,
	0x06AA, 0x9000,
	0x06AC, 0x9000,
	0x06AE, 0x9000,
	0x06B0, 0x9000,
	0x06B2, 0x9000,
	0x06B4, 0x9000,
	0x06B6, 0x9000,
	0x06B8, 0x9000,
	0x06BA, 0x9000,
	0x06BC, 0x9000,
	0x06BE, 0x9000,
	0x06C0, 0x9000,
	0x06C2, 0x9000,
	0x06C4, 0x9000,
	0x06C6, 0x8080,

// op_extend
	0x06C8, 0x0000,
	0x06CA, 0x8400,
	0x06CC, 0x9000,
	0x06CE, 0x8500,
	0x06D0, 0x0000,
	0x06D2, 0x8200,
	0x06D4, 0x8900,
	0x06D6, 0x8280,

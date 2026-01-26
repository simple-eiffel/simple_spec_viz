#include "epoly9.h"
#include "../E1/eoffsets.h"


#ifdef __cplusplus
extern "C" {
#endif

char *(*R4422[26])();
void R4422_init () {
	R4422[0] = (char *(*)()) F857_5555;
	R4422[1] = (char *(*)()) F858_5555;
	R4422[10] = (char *(*)()) F867_5811;
	R4422[11] = (char *(*)()) F868_5811;
	R4422[12] = (char *(*)()) F869_5811;
	R4422[13] = (char *(*)()) F870_5811;
	R4422[14] = (char *(*)()) F871_5811;
	R4422[15] = (char *(*)()) F872_5811;
	R4422[16] = (char *(*)()) F873_5811;
	R4422[17] = (char *(*)()) F874_5811;
	R4422[18] = (char *(*)()) F875_5811;
	R4422[19] = (char *(*)()) F876_5811;
	R4422[20] = (char *(*)()) F877_5811;
	R4422[21] = (char *(*)()) F878_5811;
	R4422[22] = (char *(*)()) F879_5811;
	R4422[23] = (char *(*)()) F880_5811;
	R4422[24] = (char *(*)()) F881_5811;
	R4422[25] = (char *(*)()) F867_5811;
}

char *(*R4423[26])();
void R4423_init () {
	R4423[0] = (char *(*)()) F857_5564;
	R4423[1] = (char *(*)()) F858_5564;
	R4423[10] = (char *(*)()) F867_5821;
	R4423[11] = (char *(*)()) F868_5821;
	R4423[12] = (char *(*)()) F869_5821;
	R4423[13] = (char *(*)()) F870_5821;
	R4423[14] = (char *(*)()) F871_5821;
	R4423[15] = (char *(*)()) F872_5821;
	R4423[16] = (char *(*)()) F873_5821;
	R4423[17] = (char *(*)()) F874_5821;
	R4423[18] = (char *(*)()) F875_5821;
	R4423[19] = (char *(*)()) F876_5821;
	R4423[20] = (char *(*)()) F877_5821;
	R4423[21] = (char *(*)()) F878_5821;
	R4423[22] = (char *(*)()) F879_5821;
	R4423[23] = (char *(*)()) F880_5821;
	R4423[24] = (char *(*)()) F881_5821;
	R4423[25] = (char *(*)()) F867_5821;
}

char *(*R4424[466])();
void R4424_init () {
	R4424[0] = (char *(*)()) F661_4944;
	{long i; for (i = 80; i < 83; i++) R4424[i] = (char *(*)()) F743_5074;}
	R4424[113] = (char *(*)()) F682_4978;
	R4424[114] = (char *(*)()) F778_5448;
	R4424[115] = (char *(*)()) F779_5448;
	R4424[116] = (char *(*)()) F780_5448;
	R4424[117] = (char *(*)()) F781_5448;
	R4424[118] = (char *(*)()) F782_5448;
	R4424[119] = (char *(*)()) F783_5448;
	R4424[120] = (char *(*)()) F784_5448;
	R4424[121] = (char *(*)()) F785_5448;
	R4424[122] = (char *(*)()) F786_5448;
	R4424[123] = (char *(*)()) F787_5448;
	R4424[124] = (char *(*)()) F788_5448;
	R4424[125] = (char *(*)()) F789_5448;
	R4424[126] = (char *(*)()) F790_5448;
	R4424[127] = (char *(*)()) F791_5448;
	R4424[128] = (char *(*)()) F792_5448;
	R4424[129] = (char *(*)()) F778_5448;
	R4424[130] = (char *(*)()) F780_5448;
	R4424[131] = (char *(*)()) F781_5448;
	R4424[132] = (char *(*)()) F786_5448;
	R4424[193] = (char *(*)()) F857_5556;
	R4424[194] = (char *(*)()) F858_5556;
	R4424[201] = (char *(*)()) F680_4978;
	R4424[203] = (char *(*)()) F680_4978;
	R4424[204] = (char *(*)()) F683_4978;
	R4424[205] = (char *(*)()) F682_4978;
	R4424[206] = (char *(*)()) F684_4978;
	R4424[207] = (char *(*)()) F685_4978;
	R4424[208] = (char *(*)()) F686_4978;
	R4424[209] = (char *(*)()) F687_4978;
	R4424[210] = (char *(*)()) F688_4978;
	R4424[211] = (char *(*)()) F689_4978;
	R4424[212] = (char *(*)()) F690_4978;
	R4424[213] = (char *(*)()) F691_4978;
	R4424[214] = (char *(*)()) F692_4978;
	R4424[215] = (char *(*)()) F693_4978;
	R4424[216] = (char *(*)()) F694_4978;
	R4424[217] = (char *(*)()) F681_4978;
	R4424[218] = (char *(*)()) F680_4978;
	R4424[222] = (char *(*)()) F886_5928;
	R4424[223] = (char *(*)()) F887_5928;
	R4424[224] = (char *(*)()) F888_5928;
	R4424[225] = (char *(*)()) F889_5928;
	{long i; for (i = 226; i < 228; i++) R4424[i] = (char *(*)()) F890_5928;}
	{long i; for (i = 228; i < 230; i++) R4424[i] = (char *(*)()) F886_5928;}
	R4424[230] = (char *(*)()) F888_5928;
	{long i; for (i = 417; i < 419; i++) R4424[i] = (char *(*)()) F685_4978;}
	R4424[421] = (char *(*)()) F681_4978;
	R4424[435] = (char *(*)()) F743_5074;
	{long i; for (i = 464; i < 466; i++) R4424[i] = (char *(*)()) F685_4978;}
}

char *(*R4435[386])();
void R4435_init () {
	{long i; for (i = 0; i < 2; i++) R4435[i] = (char *(*)()) F743_5037;}
	R4435[2] = (char *(*)()) F746_5354;
	R4435[33] = (char *(*)()) F777_5402;
	R4435[34] = (char *(*)()) F778_5442;
	R4435[35] = (char *(*)()) F779_5442;
	R4435[36] = (char *(*)()) F780_5442;
	R4435[37] = (char *(*)()) F781_5442;
	R4435[38] = (char *(*)()) F782_5442;
	R4435[39] = (char *(*)()) F783_5442;
	R4435[40] = (char *(*)()) F784_5442;
	R4435[41] = (char *(*)()) F785_5442;
	R4435[42] = (char *(*)()) F786_5442;
	R4435[43] = (char *(*)()) F787_5442;
	R4435[44] = (char *(*)()) F788_5442;
	R4435[45] = (char *(*)()) F789_5442;
	R4435[46] = (char *(*)()) F790_5442;
	R4435[47] = (char *(*)()) F791_5442;
	R4435[48] = (char *(*)()) F792_5442;
	R4435[49] = (char *(*)()) F778_5442;
	R4435[50] = (char *(*)()) F780_5442;
	R4435[51] = (char *(*)()) F781_5442;
	R4435[52] = (char *(*)()) F786_5442;
	R4435[113] = (char *(*)()) F857_5548;
	R4435[114] = (char *(*)()) F858_5548;
	R4435[121] = (char *(*)()) F865_5726;
	R4435[123] = (char *(*)()) F867_5806;
	R4435[124] = (char *(*)()) F868_5806;
	R4435[125] = (char *(*)()) F869_5806;
	R4435[126] = (char *(*)()) F870_5806;
	R4435[127] = (char *(*)()) F871_5806;
	R4435[128] = (char *(*)()) F872_5806;
	R4435[129] = (char *(*)()) F873_5806;
	R4435[130] = (char *(*)()) F874_5806;
	R4435[131] = (char *(*)()) F875_5806;
	R4435[132] = (char *(*)()) F876_5806;
	R4435[133] = (char *(*)()) F877_5806;
	R4435[134] = (char *(*)()) F878_5806;
	R4435[135] = (char *(*)()) F879_5806;
	R4435[136] = (char *(*)()) F880_5806;
	R4435[137] = (char *(*)()) F881_5806;
	R4435[138] = (char *(*)()) F867_5806;
	R4435[142] = (char *(*)()) F886_5920;
	R4435[143] = (char *(*)()) F887_5920;
	R4435[144] = (char *(*)()) F888_5920;
	R4435[145] = (char *(*)()) F889_5920;
	{long i; for (i = 146; i < 148; i++) R4435[i] = (char *(*)()) F890_5920;}
	{long i; for (i = 148; i < 150; i++) R4435[i] = (char *(*)()) F886_5920;}
	R4435[150] = (char *(*)()) F888_5920;
	{long i; for (i = 337; i < 339; i++) R4435[i] = (char *(*)()) F1079_7753;}
	R4435[341] = (char *(*)()) F1083_7918;
	R4435[355] = (char *(*)()) F1099_8270;
	{long i; for (i = 384; i < 386; i++) R4435[i] = (char *(*)()) F1128_9082;}
}

char *(*R4436[353])();
void R4436_init () {
	R4436[0] = (char *(*)()) F777_5401;
	R4436[1] = (char *(*)()) F778_5443;
	R4436[2] = (char *(*)()) F779_5443;
	R4436[3] = (char *(*)()) F780_5443;
	R4436[4] = (char *(*)()) F781_5443;
	R4436[5] = (char *(*)()) F782_5443;
	R4436[6] = (char *(*)()) F783_5443;
	R4436[7] = (char *(*)()) F784_5443;
	R4436[8] = (char *(*)()) F785_5443;
	R4436[9] = (char *(*)()) F786_5443;
	R4436[10] = (char *(*)()) F787_5443;
	R4436[11] = (char *(*)()) F788_5443;
	R4436[12] = (char *(*)()) F789_5443;
	R4436[13] = (char *(*)()) F790_5443;
	R4436[14] = (char *(*)()) F791_5443;
	R4436[15] = (char *(*)()) F792_5443;
	R4436[16] = (char *(*)()) F778_5443;
	R4436[17] = (char *(*)()) F780_5443;
	R4436[18] = (char *(*)()) F781_5443;
	R4436[19] = (char *(*)()) F786_5443;
	R4436[88] = (char *(*)()) F865_5727;
	R4436[90] = (char *(*)()) F867_5807;
	R4436[91] = (char *(*)()) F868_5807;
	R4436[92] = (char *(*)()) F869_5807;
	R4436[93] = (char *(*)()) F870_5807;
	R4436[94] = (char *(*)()) F871_5807;
	R4436[95] = (char *(*)()) F872_5807;
	R4436[96] = (char *(*)()) F873_5807;
	R4436[97] = (char *(*)()) F874_5807;
	R4436[98] = (char *(*)()) F875_5807;
	R4436[99] = (char *(*)()) F876_5807;
	R4436[100] = (char *(*)()) F877_5807;
	R4436[101] = (char *(*)()) F878_5807;
	R4436[102] = (char *(*)()) F879_5807;
	R4436[103] = (char *(*)()) F880_5807;
	R4436[104] = (char *(*)()) F881_5807;
	R4436[105] = (char *(*)()) F867_5807;
	{long i; for (i = 304; i < 306; i++) R4436[i] = (char *(*)()) F1079_7752;}
	R4436[308] = (char *(*)()) F1083_7917;
	{long i; for (i = 351; i < 353; i++) R4436[i] = (char *(*)()) F1128_9084;}
}

char *(*R4437[353])();
void R4437_init () {
	R4437[0] = (char *(*)()) F697_4983;
	R4437[1] = (char *(*)()) F778_5453;
	R4437[2] = (char *(*)()) F779_5453;
	R4437[3] = (char *(*)()) F780_5453;
	R4437[4] = (char *(*)()) F781_5453;
	R4437[5] = (char *(*)()) F782_5453;
	R4437[6] = (char *(*)()) F783_5453;
	R4437[7] = (char *(*)()) F784_5453;
	R4437[8] = (char *(*)()) F785_5453;
	R4437[9] = (char *(*)()) F786_5453;
	R4437[10] = (char *(*)()) F787_5453;
	R4437[11] = (char *(*)()) F788_5453;
	R4437[12] = (char *(*)()) F789_5453;
	R4437[13] = (char *(*)()) F790_5453;
	R4437[14] = (char *(*)()) F791_5453;
	R4437[15] = (char *(*)()) F792_5453;
	R4437[16] = (char *(*)()) F778_5453;
	R4437[17] = (char *(*)()) F780_5453;
	R4437[18] = (char *(*)()) F781_5453;
	R4437[19] = (char *(*)()) F786_5453;
	R4437[88] = (char *(*)()) F695_4983;
	R4437[90] = (char *(*)()) F695_4983;
	R4437[91] = (char *(*)()) F698_4983;
	R4437[92] = (char *(*)()) F697_4983;
	R4437[93] = (char *(*)()) F699_4983;
	R4437[94] = (char *(*)()) F700_4983;
	R4437[95] = (char *(*)()) F701_4983;
	R4437[96] = (char *(*)()) F702_4983;
	R4437[97] = (char *(*)()) F703_4983;
	R4437[98] = (char *(*)()) F704_4983;
	R4437[99] = (char *(*)()) F705_4983;
	R4437[100] = (char *(*)()) F706_4983;
	R4437[101] = (char *(*)()) F707_4983;
	R4437[102] = (char *(*)()) F708_4983;
	R4437[103] = (char *(*)()) F709_4983;
	R4437[104] = (char *(*)()) F696_4983;
	R4437[105] = (char *(*)()) F695_4983;
	{long i; for (i = 304; i < 306; i++) R4437[i] = (char *(*)()) F700_4983;}
	R4437[308] = (char *(*)()) F696_4983;
	{long i; for (i = 351; i < 353; i++) R4437[i] = (char *(*)()) F700_4983;}
}

char *(*R4440[353])();
void R4440_init () {
	R4440[0] = (char *(*)()) F697_4982;
	R4440[1] = (char *(*)()) F695_4982;
	R4440[2] = (char *(*)()) F698_4982;
	R4440[3] = (char *(*)()) F697_4982;
	R4440[4] = (char *(*)()) F699_4982;
	R4440[5] = (char *(*)()) F700_4982;
	R4440[6] = (char *(*)()) F701_4982;
	R4440[7] = (char *(*)()) F702_4982;
	R4440[8] = (char *(*)()) F703_4982;
	R4440[9] = (char *(*)()) F704_4982;
	R4440[10] = (char *(*)()) F705_4982;
	R4440[11] = (char *(*)()) F706_4982;
	R4440[12] = (char *(*)()) F707_4982;
	R4440[13] = (char *(*)()) F708_4982;
	R4440[14] = (char *(*)()) F709_4982;
	R4440[15] = (char *(*)()) F696_4982;
	R4440[16] = (char *(*)()) F695_4982;
	R4440[17] = (char *(*)()) F697_4982;
	R4440[18] = (char *(*)()) F699_4982;
	R4440[19] = (char *(*)()) F704_4982;
	R4440[88] = (char *(*)()) F695_4982;
	R4440[90] = (char *(*)()) F695_4982;
	R4440[91] = (char *(*)()) F698_4982;
	R4440[92] = (char *(*)()) F697_4982;
	R4440[93] = (char *(*)()) F699_4982;
	R4440[94] = (char *(*)()) F700_4982;
	R4440[95] = (char *(*)()) F701_4982;
	R4440[96] = (char *(*)()) F702_4982;
	R4440[97] = (char *(*)()) F703_4982;
	R4440[98] = (char *(*)()) F704_4982;
	R4440[99] = (char *(*)()) F705_4982;
	R4440[100] = (char *(*)()) F706_4982;
	R4440[101] = (char *(*)()) F707_4982;
	R4440[102] = (char *(*)()) F708_4982;
	R4440[103] = (char *(*)()) F709_4982;
	R4440[104] = (char *(*)()) F696_4982;
	R4440[105] = (char *(*)()) F695_4982;
	{long i; for (i = 304; i < 306; i++) R4440[i] = (char *(*)()) F700_4982;}
	R4440[308] = (char *(*)()) F696_4982;
	{long i; for (i = 351; i < 353; i++) R4440[i] = (char *(*)()) F700_4982;}
}

char *(*R4442[353])();
void R4442_init () {
	R4442[0] = (char *(*)()) F777_5412;
	R4442[1] = (char *(*)()) F778_5473;
	R4442[2] = (char *(*)()) F779_5473;
	R4442[3] = (char *(*)()) F780_5473;
	R4442[4] = (char *(*)()) F781_5473;
	R4442[5] = (char *(*)()) F782_5473;
	R4442[6] = (char *(*)()) F783_5473;
	R4442[7] = (char *(*)()) F784_5473;
	R4442[8] = (char *(*)()) F785_5473;
	R4442[9] = (char *(*)()) F786_5473;
	R4442[10] = (char *(*)()) F787_5473;
	R4442[11] = (char *(*)()) F788_5473;
	R4442[12] = (char *(*)()) F789_5473;
	R4442[13] = (char *(*)()) F790_5473;
	R4442[14] = (char *(*)()) F791_5473;
	R4442[15] = (char *(*)()) F792_5473;
	R4442[16] = (char *(*)()) F778_5473;
	R4442[17] = (char *(*)()) F780_5473;
	R4442[18] = (char *(*)()) F781_5473;
	R4442[19] = (char *(*)()) F786_5473;
	R4442[88] = (char *(*)()) F865_5749;
	R4442[90] = (char *(*)()) F867_5833;
	R4442[91] = (char *(*)()) F868_5833;
	R4442[92] = (char *(*)()) F869_5833;
	R4442[93] = (char *(*)()) F870_5833;
	R4442[94] = (char *(*)()) F871_5833;
	R4442[95] = (char *(*)()) F872_5833;
	R4442[96] = (char *(*)()) F873_5833;
	R4442[97] = (char *(*)()) F874_5833;
	R4442[98] = (char *(*)()) F875_5833;
	R4442[99] = (char *(*)()) F876_5833;
	R4442[100] = (char *(*)()) F877_5833;
	R4442[101] = (char *(*)()) F878_5833;
	R4442[102] = (char *(*)()) F879_5833;
	R4442[103] = (char *(*)()) F880_5833;
	R4442[104] = (char *(*)()) F881_5833;
	R4442[105] = (char *(*)()) F867_5833;
	{long i; for (i = 304; i < 306; i++) R4442[i] = (char *(*)()) F1081_7877;}
	R4442[308] = (char *(*)()) F1085_8045;
	{long i; for (i = 351; i < 353; i++) R4442[i] = (char *(*)()) F1081_7877;}
}

char *(*R4446[356])();
void R4446_init () {
	{long i; for (i = 0; i < 3; i++) R4446[i] = (char *(*)()) F717_5001_4446_4;}
	R4446[113] = (char *(*)()) F713_5001;
	R4446[114] = (char *(*)()) F715_5001_4446_4;
	R4446[123] = (char *(*)()) F867_5825;
	R4446[124] = (char *(*)()) F868_5825_4446_4;
	R4446[125] = (char *(*)()) F869_5825_4446_4;
	R4446[126] = (char *(*)()) F870_5825_4446_4;
	R4446[127] = (char *(*)()) F871_5825_4446_4;
	R4446[128] = (char *(*)()) F872_5825_4446_4;
	R4446[129] = (char *(*)()) F873_5825_4446_4;
	R4446[130] = (char *(*)()) F874_5825_4446_4;
	R4446[131] = (char *(*)()) F875_5825_4446_4;
	R4446[132] = (char *(*)()) F876_5825_4446_4;
	R4446[133] = (char *(*)()) F877_5825_4446_4;
	R4446[134] = (char *(*)()) F878_5825_4446_4;
	R4446[135] = (char *(*)()) F879_5825_4446_4;
	R4446[136] = (char *(*)()) F880_5825_4446_4;
	R4446[137] = (char *(*)()) F881_5825_4446_4;
	R4446[138] = (char *(*)()) F867_5825;
	R4446[355] = (char *(*)()) F717_5001_4446_4;
}
static void F717_5001_4446_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F717_5001(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F715_5001_4446_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F715_5001(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F868_5825_4446_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F868_5825(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F869_5825_4446_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F869_5825(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F870_5825_4446_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F870_5825(Current, *(EIF_BOOLEAN *)arg1);
}
static void F871_5825_4446_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F871_5825(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F872_5825_4446_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F872_5825(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F873_5825_4446_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F873_5825(Current, *(EIF_POINTER *)arg1);
}
static void F874_5825_4446_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F874_5825(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F875_5825_4446_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F875_5825(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F876_5825_4446_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F876_5825(Current, *(EIF_REAL_32 *)arg1);
}
static void F877_5825_4446_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F877_5825(Current, *(EIF_REAL_64 *)arg1);
}
static void F878_5825_4446_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F878_5825(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F879_5825_4446_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F879_5825(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F880_5825_4446_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F880_5825(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F881_5825_4446_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F881_5825(Current, *(EIF_CHARACTER_32 *)arg1);
}

char *(*R4447[356])();
void R4447_init () {
	{long i; for (i = 0; i < 3; i++) R4447[i] = (char *(*)()) F743_5107;}
	R4447[113] = (char *(*)()) F797_5508;
	R4447[114] = (char *(*)()) F799_5508;
	R4447[123] = (char *(*)()) F867_5832;
	R4447[124] = (char *(*)()) F868_5832;
	R4447[125] = (char *(*)()) F869_5832;
	R4447[126] = (char *(*)()) F870_5832;
	R4447[127] = (char *(*)()) F871_5832;
	R4447[128] = (char *(*)()) F872_5832;
	R4447[129] = (char *(*)()) F873_5832;
	R4447[130] = (char *(*)()) F874_5832;
	R4447[131] = (char *(*)()) F875_5832;
	R4447[132] = (char *(*)()) F876_5832;
	R4447[133] = (char *(*)()) F877_5832;
	R4447[134] = (char *(*)()) F878_5832;
	R4447[135] = (char *(*)()) F879_5832;
	R4447[136] = (char *(*)()) F880_5832;
	R4447[137] = (char *(*)()) F881_5832;
	R4447[138] = (char *(*)()) F710_4989;
	R4447[355] = (char *(*)()) F743_5107;
}

char *(*R4449[356])();
void R4449_init () {
	R4449[0] = (char *(*)()) F743_5007;
	{long i; for (i = 1; i < 3; i++) R4449[i] = (char *(*)()) F745_5288;}
	R4449[355] = (char *(*)()) F745_5288;
}

char *(*R4474[356])();
void R4474_init () {
	{long i; for (i = 0; i < 2; i++) R4474[i] = (char *(*)()) F743_5041;}
	R4474[2] = (char *(*)()) F746_5381;
	R4474[355] = (char *(*)()) F1099_8268;
}

char *(*R4519[356])();
void R4519_init () {
	{long i; for (i = 0; i < 3; i++) R4519[i] = (char *(*)()) F743_5102;}
	R4519[355] = (char *(*)()) F1099_8289;
}

char *(*R4520[356])();
void R4520_init () {
	{long i; for (i = 0; i < 2; i++) R4520[i] = (char *(*)()) F743_5105;}
	R4520[2] = (char *(*)()) F746_5378;
	R4520[355] = (char *(*)()) F743_5105;
}

char *(*R4539[356])();
void R4539_init () {
	{long i; for (i = 0; i < 3; i++) R4539[i] = (char *(*)()) F743_5161;}
	R4539[355] = (char *(*)()) F1099_8284;
}

char *(*R4543[356])();
void R4543_init () {
	R4543[0] = (char *(*)()) F744_5282;
	{long i; for (i = 1; i < 3; i++) R4543[i] = (char *(*)()) F743_5165;}
	R4543[355] = (char *(*)()) F743_5165;
}

char *(*R4544[356])();
void R4544_init () {
	{long i; for (i = 0; i < 2; i++) R4544[i] = (char *(*)()) F743_5166;}
	R4544[2] = (char *(*)()) F746_5382;
	R4544[355] = (char *(*)()) F1099_8324;
}

char *(*R4559[356])();
void R4559_init () {
	R4559[0] = (char *(*)()) F744_5283;
	{long i; for (i = 1; i < 3; i++) R4559[i] = (char *(*)()) F743_5181;}
	R4559[355] = (char *(*)()) F743_5181;
}

char *(*R4560[356])();
void R4560_init () {
	R4560[0] = (char *(*)()) F744_5284;
	{long i; for (i = 1; i < 3; i++) R4560[i] = (char *(*)()) F743_5182;}
	R4560[355] = (char *(*)()) F743_5182;
}

char *(*R4627[355])();
void R4627_init () {
	{long i; for (i = 0; i < 2; i++) R4627[i] = (char *(*)()) F745_5334;}
	R4627[354] = (char *(*)()) F1099_8266;
}

char *(*R4633[355])();
void R4633_init () {
	{long i; for (i = 0; i < 2; i++) R4633[i] = (char *(*)()) F745_5340;}
	R4633[354] = (char *(*)()) F1099_8304;
}

char *(*R4637[355])();
void R4637_init () {
	{long i; for (i = 0; i < 2; i++) R4637[i] = (char *(*)()) F745_5344;}
	R4637[354] = (char *(*)()) F1099_8305;
}

char *(*R4657[353])();
void R4657_init () {
	R4657[0] = (char *(*)()) F777_5396_4657_16;
	R4657[1] = (char *(*)()) F778_5435;
	R4657[2] = (char *(*)()) F779_5435_4657_16;
	R4657[3] = (char *(*)()) F780_5435_4657_16;
	R4657[4] = (char *(*)()) F781_5435_4657_16;
	R4657[5] = (char *(*)()) F782_5435_4657_16;
	R4657[6] = (char *(*)()) F783_5435_4657_16;
	R4657[7] = (char *(*)()) F784_5435_4657_16;
	R4657[8] = (char *(*)()) F785_5435_4657_16;
	R4657[9] = (char *(*)()) F786_5435_4657_16;
	R4657[10] = (char *(*)()) F787_5435_4657_16;
	R4657[11] = (char *(*)()) F788_5435_4657_16;
	R4657[12] = (char *(*)()) F789_5435_4657_16;
	R4657[13] = (char *(*)()) F790_5435_4657_16;
	R4657[14] = (char *(*)()) F791_5435_4657_16;
	R4657[15] = (char *(*)()) F792_5435_4657_16;
	R4657[16] = (char *(*)()) F778_5435;
	R4657[17] = (char *(*)()) F780_5435_4657_16;
	R4657[18] = (char *(*)()) F781_5435_4657_16;
	R4657[19] = (char *(*)()) F786_5435_4657_16;
	R4657[80] = (char *(*)()) F797_5493;
	R4657[81] = (char *(*)()) F799_5493_4657_16;
	R4657[90] = (char *(*)()) F867_5791;
	R4657[91] = (char *(*)()) F868_5791_4657_16;
	R4657[92] = (char *(*)()) F869_5791_4657_16;
	R4657[93] = (char *(*)()) F870_5791_4657_16;
	R4657[94] = (char *(*)()) F871_5791_4657_16;
	R4657[95] = (char *(*)()) F872_5791_4657_16;
	R4657[96] = (char *(*)()) F873_5791_4657_16;
	R4657[97] = (char *(*)()) F874_5791_4657_16;
	R4657[98] = (char *(*)()) F875_5791_4657_16;
	R4657[99] = (char *(*)()) F876_5791_4657_16;
	R4657[100] = (char *(*)()) F877_5791_4657_16;
	R4657[101] = (char *(*)()) F878_5791_4657_16;
	R4657[102] = (char *(*)()) F879_5791_4657_16;
	R4657[103] = (char *(*)()) F880_5791_4657_16;
	R4657[104] = (char *(*)()) F881_5791_4657_16;
	R4657[105] = (char *(*)()) F867_5791;
	R4657[109] = (char *(*)()) F886_5918;
	R4657[110] = (char *(*)()) F887_5918;
	R4657[111] = (char *(*)()) F888_5918_4657_16;
	R4657[112] = (char *(*)()) F889_5918_4657_16;
	{long i; for (i = 113; i < 115; i++) R4657[i] = (char *(*)()) F890_5918_4657_16;}
	{long i; for (i = 115; i < 117; i++) R4657[i] = (char *(*)()) F886_5918;}
	R4657[117] = (char *(*)()) F888_5918_4657_16;
	R4657[122] = (char *(*)()) F899_6139;
	R4657[123] = (char *(*)()) F900_6139_4657_16;
	R4657[124] = (char *(*)()) F901_6139_4657_16;
	R4657[125] = (char *(*)()) F902_6139_4657_16;
	R4657[126] = (char *(*)()) F903_6139_4657_16;
	R4657[127] = (char *(*)()) F904_6139_4657_16;
	R4657[128] = (char *(*)()) F905_6139_4657_16;
	R4657[129] = (char *(*)()) F906_6139_4657_16;
	R4657[130] = (char *(*)()) F907_6139_4657_16;
	R4657[131] = (char *(*)()) F908_6139_4657_16;
	R4657[132] = (char *(*)()) F909_6139_4657_16;
	R4657[133] = (char *(*)()) F910_6139_4657_16;
	R4657[134] = (char *(*)()) F911_6139_4657_16;
	R4657[135] = (char *(*)()) F912_6139_4657_16;
	R4657[136] = (char *(*)()) F913_6139_4657_16;
	R4657[220] = (char *(*)()) F997_6368;
	R4657[303] = (char *(*)()) F1080_7788_4657_16;
	{long i; for (i = 304; i < 306; i++) R4657[i] = (char *(*)()) F1081_7810_4657_16;}
	R4657[307] = (char *(*)()) F1084_7956_4657_16;
	R4657[308] = (char *(*)()) F1085_7979_4657_16;
	{long i; for (i = 351; i < 353; i++) R4657[i] = (char *(*)()) F1128_9065_4657_16;}
}
static EIF_REFERENCE F777_5396_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F777_5396(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(1005, 0x00).id, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F779_5435_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F779_5435(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(1014, 0x00).id, 1014, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F780_5435_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F780_5435(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(1005, 0x00).id, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F781_5435_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F781_5435(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(1035, 0x00).id, 1035, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F782_5435_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F782_5435(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(1032, 0x00).id, 1032, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F783_5435_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F783_5435(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(1020, 0x00).id, 1020, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F784_5435_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F784_5435(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(1068, 0x00).id, 1068, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F785_5435_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F785_5435(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(1017, 0x00).id, 1017, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F786_5435_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F786_5435(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(1011, 0x00).id, 1011, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F787_5435_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F787_5435(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(1023, 0x00).id, 1023, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F788_5435_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F788_5435(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(1026, 0x00).id, 1026, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F789_5435_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F789_5435(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(1008, 0x00).id, 1008, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F790_5435_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F790_5435(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(1002, 0x00).id, 1002, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F791_5435_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F791_5435(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(999, 0x00).id, 999, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F792_5435_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F792_5435(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(1029, 0x00).id, 1029, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F799_5493_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F799_5493(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(1005, 0x00).id, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F868_5791_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F868_5791(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(1014, 0x00).id, 1014, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F869_5791_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F869_5791(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(1005, 0x00).id, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F870_5791_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F870_5791(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(1035, 0x00).id, 1035, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F871_5791_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F871_5791(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(1032, 0x00).id, 1032, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F872_5791_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F872_5791(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(1020, 0x00).id, 1020, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F873_5791_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F873_5791(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(1068, 0x00).id, 1068, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F874_5791_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F874_5791(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(1017, 0x00).id, 1017, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F875_5791_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F875_5791(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(1011, 0x00).id, 1011, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F876_5791_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F876_5791(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(1023, 0x00).id, 1023, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F877_5791_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F877_5791(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(1026, 0x00).id, 1026, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F878_5791_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F878_5791(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(1008, 0x00).id, 1008, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F879_5791_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F879_5791(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(1002, 0x00).id, 1002, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F880_5791_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F880_5791(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(999, 0x00).id, 999, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F881_5791_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F881_5791(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(1029, 0x00).id, 1029, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F888_5918_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F888_5918(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(1005, 0x00).id, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F889_5918_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F889_5918(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(1005, 0x00).id, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F890_5918_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F890_5918(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(1017, 0x00).id, 1017, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F900_6139_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F900_6139(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(1014, 0x00).id, 1014, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F901_6139_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F901_6139(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(1005, 0x00).id, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F902_6139_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F902_6139(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(1035, 0x00).id, 1035, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F903_6139_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F903_6139(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(1032, 0x00).id, 1032, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F904_6139_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F904_6139(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(1020, 0x00).id, 1020, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F905_6139_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F905_6139(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(1068, 0x00).id, 1068, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F906_6139_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F906_6139(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(1017, 0x00).id, 1017, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F907_6139_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F907_6139(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(1011, 0x00).id, 1011, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F908_6139_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F908_6139(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(1023, 0x00).id, 1023, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F909_6139_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F909_6139(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(1026, 0x00).id, 1026, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F910_6139_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F910_6139(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(1008, 0x00).id, 1008, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F911_6139_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F911_6139(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(1002, 0x00).id, 1002, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F912_6139_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F912_6139(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(999, 0x00).id, 999, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F913_6139_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F913_6139(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(1029, 0x00).id, 1029, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1080_7788_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F1080_7788(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(1032, 0x00).id, 1032, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1081_7810_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F1081_7810(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(1032, 0x00).id, 1032, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1084_7956_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F1084_7956(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(1029, 0x00).id, 1029, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1085_7979_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F1085_7979(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(1029, 0x00).id, 1029, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1128_9065_4657_16 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F1128_9065(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(1032, 0x00).id, 1032, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}

char *(*R4658[353])();
void R4658_init () {
	R4658[0] = (char *(*)()) F777_5393;
	R4658[1] = (char *(*)()) F778_5440;
	R4658[2] = (char *(*)()) F779_5440;
	R4658[3] = (char *(*)()) F780_5440;
	R4658[4] = (char *(*)()) F781_5440;
	R4658[5] = (char *(*)()) F782_5440;
	R4658[6] = (char *(*)()) F783_5440;
	R4658[7] = (char *(*)()) F784_5440;
	R4658[8] = (char *(*)()) F785_5440;
	R4658[9] = (char *(*)()) F786_5440;
	R4658[10] = (char *(*)()) F787_5440;
	R4658[11] = (char *(*)()) F788_5440;
	R4658[12] = (char *(*)()) F789_5440;
	R4658[13] = (char *(*)()) F790_5440;
	R4658[14] = (char *(*)()) F791_5440;
	R4658[15] = (char *(*)()) F792_5440;
	R4658[16] = (char *(*)()) F778_5440;
	R4658[17] = (char *(*)()) F780_5440;
	R4658[18] = (char *(*)()) F781_5440;
	R4658[19] = (char *(*)()) F786_5440;
	R4658[80] = (char *(*)()) F797_5496;
	R4658[81] = (char *(*)()) F799_5496;
	R4658[90] = (char *(*)()) F797_5496;
	R4658[91] = (char *(*)()) F798_5496;
	R4658[92] = (char *(*)()) F799_5496;
	R4658[93] = (char *(*)()) F800_5496;
	R4658[94] = (char *(*)()) F801_5496;
	R4658[95] = (char *(*)()) F802_5496;
	R4658[96] = (char *(*)()) F803_5496;
	R4658[97] = (char *(*)()) F804_5496;
	R4658[98] = (char *(*)()) F805_5496;
	R4658[99] = (char *(*)()) F806_5496;
	R4658[100] = (char *(*)()) F807_5496;
	R4658[101] = (char *(*)()) F808_5496;
	R4658[102] = (char *(*)()) F809_5496;
	R4658[103] = (char *(*)()) F810_5496;
	R4658[104] = (char *(*)()) F811_5496;
	R4658[105] = (char *(*)()) F797_5496;
	R4658[109] = (char *(*)()) F886_5923;
	R4658[110] = (char *(*)()) F887_5923;
	R4658[111] = (char *(*)()) F888_5923;
	R4658[112] = (char *(*)()) F889_5923;
	{long i; for (i = 113; i < 115; i++) R4658[i] = (char *(*)()) F890_5923;}
	{long i; for (i = 115; i < 117; i++) R4658[i] = (char *(*)()) F886_5923;}
	R4658[117] = (char *(*)()) F888_5923;
	R4658[122] = (char *(*)()) F899_6147;
	R4658[123] = (char *(*)()) F900_6147;
	R4658[124] = (char *(*)()) F901_6147;
	R4658[125] = (char *(*)()) F902_6147;
	R4658[126] = (char *(*)()) F903_6147;
	R4658[127] = (char *(*)()) F904_6147;
	R4658[128] = (char *(*)()) F905_6147;
	R4658[129] = (char *(*)()) F906_6147;
	R4658[130] = (char *(*)()) F907_6147;
	R4658[131] = (char *(*)()) F908_6147;
	R4658[132] = (char *(*)()) F909_6147;
	R4658[133] = (char *(*)()) F910_6147;
	R4658[134] = (char *(*)()) F911_6147;
	R4658[135] = (char *(*)()) F912_6147;
	R4658[136] = (char *(*)()) F913_6147;
	R4658[220] = (char *(*)()) F997_6398;
	{long i; for (i = 303; i < 306; i++) R4658[i] = (char *(*)()) F1079_7755;}
	{long i; for (i = 307; i < 309; i++) R4658[i] = (char *(*)()) F1083_7920;}
	{long i; for (i = 351; i < 353; i++) R4658[i] = (char *(*)()) F1079_7755;}
}

EIF_TYPE_INDEX *Y4658_gen_type [383];
EIF_TYPE_INDEX Y4658 [383];
void Y4658_init (void)
{
	egc_routines_types [4658] = Y4658;
	egc_routines_gen_types [4658] = Y4658_gen_type;
	egc_routines_offset [4658] = 746;
	{long i; for (i = 0; i < 112; i++) Y4658[i] = 1005;};
	{long i; for (i = 120; i < 136; i++) Y4658[i] = 1005;};
	{long i; for (i = 139; i < 148; i++) Y4658[i] = 1005;};
	{long i; for (i = 152; i < 167; i++) Y4658[i] = 1005;};
	Y4658[250] = 1005;
	{long i; for (i = 332; i < 339; i++) Y4658[i] = 1005;};
	{long i; for (i = 381; i < 383; i++) Y4658[i] = 1005;};
}

char *(*R4659[353])();
void R4659_init () {
	R4659[0] = (char *(*)()) F777_5395;
	R4659[1] = (char *(*)()) F778_5441;
	R4659[2] = (char *(*)()) F779_5441;
	R4659[3] = (char *(*)()) F780_5441;
	R4659[4] = (char *(*)()) F781_5441;
	R4659[5] = (char *(*)()) F782_5441;
	R4659[6] = (char *(*)()) F783_5441;
	R4659[7] = (char *(*)()) F784_5441;
	R4659[8] = (char *(*)()) F785_5441;
	R4659[9] = (char *(*)()) F786_5441;
	R4659[10] = (char *(*)()) F787_5441;
	R4659[11] = (char *(*)()) F788_5441;
	R4659[12] = (char *(*)()) F789_5441;
	R4659[13] = (char *(*)()) F790_5441;
	R4659[14] = (char *(*)()) F791_5441;
	R4659[15] = (char *(*)()) F792_5441;
	R4659[16] = (char *(*)()) F778_5441;
	R4659[17] = (char *(*)()) F780_5441;
	R4659[18] = (char *(*)()) F781_5441;
	R4659[19] = (char *(*)()) F786_5441;
	R4659[80] = (char *(*)()) F857_5548;
	R4659[81] = (char *(*)()) F858_5548;
	R4659[90] = (char *(*)()) F867_5806;
	R4659[91] = (char *(*)()) F868_5806;
	R4659[92] = (char *(*)()) F869_5806;
	R4659[93] = (char *(*)()) F870_5806;
	R4659[94] = (char *(*)()) F871_5806;
	R4659[95] = (char *(*)()) F872_5806;
	R4659[96] = (char *(*)()) F873_5806;
	R4659[97] = (char *(*)()) F874_5806;
	R4659[98] = (char *(*)()) F875_5806;
	R4659[99] = (char *(*)()) F876_5806;
	R4659[100] = (char *(*)()) F877_5806;
	R4659[101] = (char *(*)()) F878_5806;
	R4659[102] = (char *(*)()) F879_5806;
	R4659[103] = (char *(*)()) F880_5806;
	R4659[104] = (char *(*)()) F881_5806;
	R4659[105] = (char *(*)()) F867_5806;
	R4659[109] = (char *(*)()) F886_5924;
	R4659[110] = (char *(*)()) F887_5924;
	R4659[111] = (char *(*)()) F888_5924;
	R4659[112] = (char *(*)()) F889_5924;
	{long i; for (i = 113; i < 115; i++) R4659[i] = (char *(*)()) F890_5924;}
	{long i; for (i = 115; i < 117; i++) R4659[i] = (char *(*)()) F886_5924;}
	R4659[117] = (char *(*)()) F888_5924;
	R4659[122] = (char *(*)()) F899_6148;
	R4659[123] = (char *(*)()) F900_6148;
	R4659[124] = (char *(*)()) F901_6148;
	R4659[125] = (char *(*)()) F902_6148;
	R4659[126] = (char *(*)()) F903_6148;
	R4659[127] = (char *(*)()) F904_6148;
	R4659[128] = (char *(*)()) F905_6148;
	R4659[129] = (char *(*)()) F906_6148;
	R4659[130] = (char *(*)()) F907_6148;
	R4659[131] = (char *(*)()) F908_6148;
	R4659[132] = (char *(*)()) F909_6148;
	R4659[133] = (char *(*)()) F910_6148;
	R4659[134] = (char *(*)()) F911_6148;
	R4659[135] = (char *(*)()) F912_6148;
	R4659[136] = (char *(*)()) F913_6148;
	R4659[220] = (char *(*)()) F997_6397;
	{long i; for (i = 303; i < 306; i++) R4659[i] = (char *(*)()) F1079_7753;}
	{long i; for (i = 307; i < 309; i++) R4659[i] = (char *(*)()) F1083_7918;}
	{long i; for (i = 351; i < 353; i++) R4659[i] = (char *(*)()) F1128_9082;}
}

char *(*R4661[353])();
void R4661_init () {
	R4661[0] = (char *(*)()) F777_5399;
	R4661[1] = (char *(*)()) F778_5450;
	R4661[2] = (char *(*)()) F779_5450;
	R4661[3] = (char *(*)()) F780_5450;
	R4661[4] = (char *(*)()) F781_5450;
	R4661[5] = (char *(*)()) F782_5450;
	R4661[6] = (char *(*)()) F783_5450;
	R4661[7] = (char *(*)()) F784_5450;
	R4661[8] = (char *(*)()) F785_5450;
	R4661[9] = (char *(*)()) F786_5450;
	R4661[10] = (char *(*)()) F787_5450;
	R4661[11] = (char *(*)()) F788_5450;
	R4661[12] = (char *(*)()) F789_5450;
	R4661[13] = (char *(*)()) F790_5450;
	R4661[14] = (char *(*)()) F791_5450;
	R4661[15] = (char *(*)()) F792_5450;
	R4661[16] = (char *(*)()) F778_5450;
	R4661[17] = (char *(*)()) F780_5450;
	R4661[18] = (char *(*)()) F781_5450;
	R4661[19] = (char *(*)()) F786_5450;
	R4661[80] = (char *(*)()) F797_5501;
	R4661[81] = (char *(*)()) F799_5501;
	R4661[90] = (char *(*)()) F867_5812;
	R4661[91] = (char *(*)()) F868_5812;
	R4661[92] = (char *(*)()) F869_5812;
	R4661[93] = (char *(*)()) F870_5812;
	R4661[94] = (char *(*)()) F871_5812;
	R4661[95] = (char *(*)()) F872_5812;
	R4661[96] = (char *(*)()) F873_5812;
	R4661[97] = (char *(*)()) F874_5812;
	R4661[98] = (char *(*)()) F875_5812;
	R4661[99] = (char *(*)()) F876_5812;
	R4661[100] = (char *(*)()) F877_5812;
	R4661[101] = (char *(*)()) F878_5812;
	R4661[102] = (char *(*)()) F879_5812;
	R4661[103] = (char *(*)()) F880_5812;
	R4661[104] = (char *(*)()) F881_5812;
	R4661[105] = (char *(*)()) F867_5812;
	R4661[109] = (char *(*)()) F886_5940;
	R4661[110] = (char *(*)()) F887_5940;
	R4661[111] = (char *(*)()) F888_5940;
	R4661[112] = (char *(*)()) F889_5940;
	{long i; for (i = 113; i < 115; i++) R4661[i] = (char *(*)()) F890_5940;}
	{long i; for (i = 115; i < 117; i++) R4661[i] = (char *(*)()) F886_5940;}
	R4661[117] = (char *(*)()) F888_5940;
	R4661[122] = (char *(*)()) F899_6153;
	R4661[123] = (char *(*)()) F900_6153;
	R4661[124] = (char *(*)()) F901_6153;
	R4661[125] = (char *(*)()) F902_6153;
	R4661[126] = (char *(*)()) F903_6153;
	R4661[127] = (char *(*)()) F904_6153;
	R4661[128] = (char *(*)()) F905_6153;
	R4661[129] = (char *(*)()) F906_6153;
	R4661[130] = (char *(*)()) F907_6153;
	R4661[131] = (char *(*)()) F908_6153;
	R4661[132] = (char *(*)()) F909_6153;
	R4661[133] = (char *(*)()) F910_6153;
	R4661[134] = (char *(*)()) F911_6153;
	R4661[135] = (char *(*)()) F912_6153;
	R4661[136] = (char *(*)()) F913_6153;
	R4661[220] = (char *(*)()) F997_6395;
	{long i; for (i = 303; i < 306; i++) R4661[i] = (char *(*)()) F1076_7613;}
	{long i; for (i = 307; i < 309; i++) R4661[i] = (char *(*)()) F1076_7613;}
	{long i; for (i = 351; i < 353; i++) R4661[i] = (char *(*)()) F1076_7613;}
}

char *(*R4681[19])();
void R4681_init () {
	R4681[0] = (char *(*)()) F778_5429;
	R4681[1] = (char *(*)()) F779_5429;
	R4681[2] = (char *(*)()) F780_5429;
	R4681[3] = (char *(*)()) F781_5429;
	R4681[4] = (char *(*)()) F782_5429;
	R4681[5] = (char *(*)()) F783_5429;
	R4681[6] = (char *(*)()) F784_5429;
	R4681[7] = (char *(*)()) F785_5429;
	R4681[8] = (char *(*)()) F786_5429;
	R4681[9] = (char *(*)()) F787_5429;
	R4681[10] = (char *(*)()) F788_5429;
	R4681[11] = (char *(*)()) F789_5429;
	R4681[12] = (char *(*)()) F790_5429;
	R4681[13] = (char *(*)()) F791_5429;
	R4681[14] = (char *(*)()) F792_5429;
	R4681[15] = (char *(*)()) F778_5429;
	R4681[16] = (char *(*)()) F780_5429;
	R4681[17] = (char *(*)()) F781_5429;
	R4681[18] = (char *(*)()) F786_5429;
}

char *(*R4682[19])();
void R4682_init () {
	R4682[0] = (char *(*)()) F778_5430;
	R4682[1] = (char *(*)()) F779_5430_4682_20;
	R4682[2] = (char *(*)()) F780_5430_4682_20;
	R4682[3] = (char *(*)()) F781_5430_4682_20;
	R4682[4] = (char *(*)()) F782_5430_4682_20;
	R4682[5] = (char *(*)()) F783_5430_4682_20;
	R4682[6] = (char *(*)()) F784_5430_4682_20;
	R4682[7] = (char *(*)()) F785_5430_4682_20;
	R4682[8] = (char *(*)()) F786_5430_4682_20;
	R4682[9] = (char *(*)()) F787_5430_4682_20;
	R4682[10] = (char *(*)()) F788_5430_4682_20;
	R4682[11] = (char *(*)()) F789_5430_4682_20;
	R4682[12] = (char *(*)()) F790_5430_4682_20;
	R4682[13] = (char *(*)()) F791_5430_4682_20;
	R4682[14] = (char *(*)()) F792_5430_4682_20;
	R4682[15] = (char *(*)()) F778_5430;
	R4682[16] = (char *(*)()) F780_5430_4682_20;
	R4682[17] = (char *(*)()) F781_5430_4682_20;
	R4682[18] = (char *(*)()) F786_5430_4682_20;
}
static void F779_5430_4682_20 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F779_5430(Current, *(EIF_NATURAL_64 *)arg1, arg2, arg3);
}
static void F780_5430_4682_20 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F780_5430(Current, *(EIF_INTEGER_32 *)arg1, arg2, arg3);
}
static void F781_5430_4682_20 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F781_5430(Current, *(EIF_BOOLEAN *)arg1, arg2, arg3);
}
static void F782_5430_4682_20 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F782_5430(Current, *(EIF_CHARACTER_8 *)arg1, arg2, arg3);
}
static void F783_5430_4682_20 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F783_5430(Current, *(EIF_NATURAL_8 *)arg1, arg2, arg3);
}
static void F784_5430_4682_20 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F784_5430(Current, *(EIF_POINTER *)arg1, arg2, arg3);
}
static void F785_5430_4682_20 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F785_5430(Current, *(EIF_NATURAL_32 *)arg1, arg2, arg3);
}
static void F786_5430_4682_20 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F786_5430(Current, *(EIF_INTEGER_8 *)arg1, arg2, arg3);
}
static void F787_5430_4682_20 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F787_5430(Current, *(EIF_REAL_32 *)arg1, arg2, arg3);
}
static void F788_5430_4682_20 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F788_5430(Current, *(EIF_REAL_64 *)arg1, arg2, arg3);
}
static void F789_5430_4682_20 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F789_5430(Current, *(EIF_INTEGER_16 *)arg1, arg2, arg3);
}
static void F790_5430_4682_20 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F790_5430(Current, *(EIF_INTEGER_64 *)arg1, arg2, arg3);
}
static void F791_5430_4682_20 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F791_5430(Current, *(EIF_NATURAL_16 *)arg1, arg2, arg3);
}
static void F792_5430_4682_20 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F792_5430(Current, *(EIF_CHARACTER_32 *)arg1, arg2, arg3);
}

char *(*R4684[19])();
void R4684_init () {
	R4684[0] = (char *(*)()) F778_5432;
	R4684[1] = (char *(*)()) F779_5432;
	R4684[2] = (char *(*)()) F780_5432;
	R4684[3] = (char *(*)()) F781_5432;
	R4684[4] = (char *(*)()) F782_5432;
	R4684[5] = (char *(*)()) F783_5432;
	R4684[6] = (char *(*)()) F784_5432;
	R4684[7] = (char *(*)()) F785_5432;
	R4684[8] = (char *(*)()) F786_5432;
	R4684[9] = (char *(*)()) F787_5432;
	R4684[10] = (char *(*)()) F788_5432;
	R4684[11] = (char *(*)()) F789_5432;
	R4684[12] = (char *(*)()) F790_5432;
	R4684[13] = (char *(*)()) F791_5432;
	R4684[14] = (char *(*)()) F792_5432;
	R4684[15] = (char *(*)()) F778_5432;
	R4684[16] = (char *(*)()) F780_5432;
	R4684[17] = (char *(*)()) F781_5432;
	R4684[18] = (char *(*)()) F786_5432;
}

char *(*R4685[19])();
void R4685_init () {
	R4685[0] = (char *(*)()) F778_5433;
	R4685[1] = (char *(*)()) F779_5433;
	R4685[2] = (char *(*)()) F780_5433;
	R4685[3] = (char *(*)()) F781_5433;
	R4685[4] = (char *(*)()) F782_5433;
	R4685[5] = (char *(*)()) F783_5433;
	R4685[6] = (char *(*)()) F784_5433;
	R4685[7] = (char *(*)()) F785_5433;
	R4685[8] = (char *(*)()) F786_5433;
	R4685[9] = (char *(*)()) F787_5433;
	R4685[10] = (char *(*)()) F788_5433;
	R4685[11] = (char *(*)()) F789_5433;
	R4685[12] = (char *(*)()) F790_5433;
	R4685[13] = (char *(*)()) F791_5433;
	R4685[14] = (char *(*)()) F792_5433;
	R4685[15] = (char *(*)()) F778_5433;
	R4685[16] = (char *(*)()) F780_5433;
	R4685[17] = (char *(*)()) F781_5433;
	R4685[18] = (char *(*)()) F786_5433;
}

char *(*R4688[19])();
void R4688_init () {
	R4688[0] = (char *(*)()) F778_5446;
	R4688[1] = (char *(*)()) F779_5446;
	R4688[2] = (char *(*)()) F780_5446;
	R4688[3] = (char *(*)()) F781_5446;
	R4688[4] = (char *(*)()) F782_5446;
	R4688[5] = (char *(*)()) F783_5446;
	R4688[6] = (char *(*)()) F784_5446;
	R4688[7] = (char *(*)()) F785_5446;
	R4688[8] = (char *(*)()) F786_5446;
	R4688[9] = (char *(*)()) F787_5446;
	R4688[10] = (char *(*)()) F788_5446;
	R4688[11] = (char *(*)()) F789_5446;
	R4688[12] = (char *(*)()) F790_5446;
	R4688[13] = (char *(*)()) F791_5446;
	R4688[14] = (char *(*)()) F792_5446;
	R4688[15] = (char *(*)()) F778_5446;
	R4688[16] = (char *(*)()) F780_5446;
	R4688[17] = (char *(*)()) F781_5446;
	R4688[18] = (char *(*)()) F786_5446;
}

char *(*R4689[19])();
void R4689_init () {
	R4689[0] = (char *(*)()) F778_5447;
	R4689[1] = (char *(*)()) F779_5447_4689_2;
	R4689[2] = (char *(*)()) F780_5447_4689_2;
	R4689[3] = (char *(*)()) F781_5447_4689_2;
	R4689[4] = (char *(*)()) F782_5447_4689_2;
	R4689[5] = (char *(*)()) F783_5447_4689_2;
	R4689[6] = (char *(*)()) F784_5447_4689_2;
	R4689[7] = (char *(*)()) F785_5447_4689_2;
	R4689[8] = (char *(*)()) F786_5447_4689_2;
	R4689[9] = (char *(*)()) F787_5447_4689_2;
	R4689[10] = (char *(*)()) F788_5447_4689_2;
	R4689[11] = (char *(*)()) F789_5447_4689_2;
	R4689[12] = (char *(*)()) F790_5447_4689_2;
	R4689[13] = (char *(*)()) F791_5447_4689_2;
	R4689[14] = (char *(*)()) F792_5447_4689_2;
	R4689[15] = (char *(*)()) F778_5447;
	R4689[16] = (char *(*)()) F780_5447_4689_2;
	R4689[17] = (char *(*)()) F781_5447_4689_2;
	R4689[18] = (char *(*)()) F786_5447_4689_2;
}
static EIF_BOOLEAN F779_5447_4689_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F779_5447(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_BOOLEAN F780_5447_4689_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F780_5447(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F781_5447_4689_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F781_5447(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F782_5447_4689_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F782_5447(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_BOOLEAN F783_5447_4689_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F783_5447(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_BOOLEAN F784_5447_4689_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F784_5447(Current, *(EIF_POINTER *)arg1);
}
static EIF_BOOLEAN F785_5447_4689_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F785_5447(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F786_5447_4689_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F786_5447(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_BOOLEAN F787_5447_4689_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F787_5447(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_BOOLEAN F788_5447_4689_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F788_5447(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_BOOLEAN F789_5447_4689_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F789_5447(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_BOOLEAN F790_5447_4689_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F790_5447(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_BOOLEAN F791_5447_4689_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F791_5447(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_BOOLEAN F792_5447_4689_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F792_5447(Current, *(EIF_CHARACTER_32 *)arg1);
}

char *(*R4690[19])();
void R4690_init () {
	R4690[0] = (char *(*)()) F778_5449;
	R4690[1] = (char *(*)()) F779_5449;
	R4690[2] = (char *(*)()) F780_5449;
	R4690[3] = (char *(*)()) F781_5449;
	R4690[4] = (char *(*)()) F782_5449;
	R4690[5] = (char *(*)()) F783_5449;
	R4690[6] = (char *(*)()) F784_5449;
	R4690[7] = (char *(*)()) F785_5449;
	R4690[8] = (char *(*)()) F786_5449;
	R4690[9] = (char *(*)()) F787_5449;
	R4690[10] = (char *(*)()) F788_5449;
	R4690[11] = (char *(*)()) F789_5449;
	R4690[12] = (char *(*)()) F790_5449;
	R4690[13] = (char *(*)()) F791_5449;
	R4690[14] = (char *(*)()) F792_5449;
	R4690[15] = (char *(*)()) F778_5449;
	R4690[16] = (char *(*)()) F780_5449;
	R4690[17] = (char *(*)()) F781_5449;
	R4690[18] = (char *(*)()) F786_5449;
}

char *(*R4692[19])();
void R4692_init () {
	R4692[0] = (char *(*)()) F778_5456;
	R4692[1] = (char *(*)()) F779_5456_4692_58;
	R4692[2] = (char *(*)()) F780_5456_4692_58;
	R4692[3] = (char *(*)()) F781_5456_4692_58;
	R4692[4] = (char *(*)()) F782_5456_4692_58;
	R4692[5] = (char *(*)()) F783_5456_4692_58;
	R4692[6] = (char *(*)()) F784_5456_4692_58;
	R4692[7] = (char *(*)()) F785_5456_4692_58;
	R4692[8] = (char *(*)()) F786_5456_4692_58;
	R4692[9] = (char *(*)()) F787_5456_4692_58;
	R4692[10] = (char *(*)()) F788_5456_4692_58;
	R4692[11] = (char *(*)()) F789_5456_4692_58;
	R4692[12] = (char *(*)()) F790_5456_4692_58;
	R4692[13] = (char *(*)()) F791_5456_4692_58;
	R4692[14] = (char *(*)()) F792_5456_4692_58;
	R4692[15] = (char *(*)()) F778_5456;
	R4692[16] = (char *(*)()) F780_5456_4692_58;
	R4692[17] = (char *(*)()) F781_5456_4692_58;
	R4692[18] = (char *(*)()) F786_5456_4692_58;
}
static void F779_5456_4692_58 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F779_5456(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static void F780_5456_4692_58 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F780_5456(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F781_5456_4692_58 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F781_5456(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static void F782_5456_4692_58 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F782_5456(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static void F783_5456_4692_58 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F783_5456(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static void F784_5456_4692_58 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F784_5456(Current, *(EIF_POINTER *)arg1, arg2);
}
static void F785_5456_4692_58 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F785_5456(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static void F786_5456_4692_58 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F786_5456(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}
static void F787_5456_4692_58 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F787_5456(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static void F788_5456_4692_58 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F788_5456(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static void F789_5456_4692_58 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F789_5456(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}
static void F790_5456_4692_58 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F790_5456(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static void F791_5456_4692_58 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F791_5456(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static void F792_5456_4692_58 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F792_5456(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}

char *(*R4695[19])();
void R4695_init () {
	R4695[0] = (char *(*)()) F778_5459;
	R4695[1] = (char *(*)()) F779_5459;
	R4695[2] = (char *(*)()) F780_5459;
	R4695[3] = (char *(*)()) F781_5459;
	R4695[4] = (char *(*)()) F782_5459;
	R4695[5] = (char *(*)()) F783_5459;
	R4695[6] = (char *(*)()) F784_5459;
	R4695[7] = (char *(*)()) F785_5459;
	R4695[8] = (char *(*)()) F786_5459;
	R4695[9] = (char *(*)()) F787_5459;
	R4695[10] = (char *(*)()) F788_5459;
	R4695[11] = (char *(*)()) F789_5459;
	R4695[12] = (char *(*)()) F790_5459;
	R4695[13] = (char *(*)()) F791_5459;
	R4695[14] = (char *(*)()) F792_5459;
	R4695[15] = (char *(*)()) F778_5459;
	R4695[16] = (char *(*)()) F780_5459;
	R4695[17] = (char *(*)()) F781_5459;
	R4695[18] = (char *(*)()) F786_5459;
}

char *(*R4702[19])();
void R4702_init () {
	R4702[0] = (char *(*)()) F778_5467;
	R4702[1] = (char *(*)()) F779_5467;
	R4702[2] = (char *(*)()) F780_5467;
	R4702[3] = (char *(*)()) F781_5467;
	R4702[4] = (char *(*)()) F782_5467;
	R4702[5] = (char *(*)()) F783_5467;
	R4702[6] = (char *(*)()) F784_5467;
	R4702[7] = (char *(*)()) F785_5467;
	R4702[8] = (char *(*)()) F786_5467;
	R4702[9] = (char *(*)()) F787_5467;
	R4702[10] = (char *(*)()) F788_5467;
	R4702[11] = (char *(*)()) F789_5467;
	R4702[12] = (char *(*)()) F790_5467;
	R4702[13] = (char *(*)()) F791_5467;
	R4702[14] = (char *(*)()) F792_5467;
	R4702[15] = (char *(*)()) F778_5467;
	R4702[16] = (char *(*)()) F780_5467;
	R4702[17] = (char *(*)()) F781_5467;
	R4702[18] = (char *(*)()) F786_5467;
}

char *(*R4704[19])();
void R4704_init () {
	R4704[0] = (char *(*)()) F778_5469;
	R4704[1] = (char *(*)()) F779_5469;
	R4704[2] = (char *(*)()) F780_5469;
	R4704[3] = (char *(*)()) F781_5469;
	R4704[4] = (char *(*)()) F782_5469;
	R4704[5] = (char *(*)()) F783_5469;
	R4704[6] = (char *(*)()) F784_5469;
	R4704[7] = (char *(*)()) F785_5469;
	R4704[8] = (char *(*)()) F786_5469;
	R4704[9] = (char *(*)()) F787_5469;
	R4704[10] = (char *(*)()) F788_5469;
	R4704[11] = (char *(*)()) F789_5469;
	R4704[12] = (char *(*)()) F790_5469;
	R4704[13] = (char *(*)()) F791_5469;
	R4704[14] = (char *(*)()) F792_5469;
	R4704[15] = (char *(*)()) F778_5469;
	R4704[16] = (char *(*)()) F780_5469;
	R4704[17] = (char *(*)()) F781_5469;
	R4704[18] = (char *(*)()) F786_5469;
}

char *(*R4705[19])();
void R4705_init () {
	R4705[0] = (char *(*)()) F778_5470;
	R4705[1] = (char *(*)()) F779_5470;
	R4705[2] = (char *(*)()) F780_5470;
	R4705[3] = (char *(*)()) F781_5470;
	R4705[4] = (char *(*)()) F782_5470;
	R4705[5] = (char *(*)()) F783_5470;
	R4705[6] = (char *(*)()) F784_5470;
	R4705[7] = (char *(*)()) F785_5470;
	R4705[8] = (char *(*)()) F786_5470;
	R4705[9] = (char *(*)()) F787_5470;
	R4705[10] = (char *(*)()) F788_5470;
	R4705[11] = (char *(*)()) F789_5470;
	R4705[12] = (char *(*)()) F790_5470;
	R4705[13] = (char *(*)()) F791_5470;
	R4705[14] = (char *(*)()) F792_5470;
	R4705[15] = (char *(*)()) F778_5470;
	R4705[16] = (char *(*)()) F780_5470;
	R4705[17] = (char *(*)()) F781_5470;
	R4705[18] = (char *(*)()) F786_5470;
}

char *(*R4709[19])();
void R4709_init () {
	R4709[0] = (char *(*)()) F778_5475;
	R4709[1] = (char *(*)()) F779_5475_4709_20;
	R4709[2] = (char *(*)()) F780_5475_4709_20;
	R4709[3] = (char *(*)()) F781_5475_4709_20;
	R4709[4] = (char *(*)()) F782_5475_4709_20;
	R4709[5] = (char *(*)()) F783_5475_4709_20;
	R4709[6] = (char *(*)()) F784_5475_4709_20;
	R4709[7] = (char *(*)()) F785_5475_4709_20;
	R4709[8] = (char *(*)()) F786_5475_4709_20;
	R4709[9] = (char *(*)()) F787_5475_4709_20;
	R4709[10] = (char *(*)()) F788_5475_4709_20;
	R4709[11] = (char *(*)()) F789_5475_4709_20;
	R4709[12] = (char *(*)()) F790_5475_4709_20;
	R4709[13] = (char *(*)()) F791_5475_4709_20;
	R4709[14] = (char *(*)()) F792_5475_4709_20;
	R4709[15] = (char *(*)()) F778_5475;
	R4709[16] = (char *(*)()) F780_5475_4709_20;
	R4709[17] = (char *(*)()) F781_5475_4709_20;
	R4709[18] = (char *(*)()) F786_5475_4709_20;
}
static void F779_5475_4709_20 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F779_5475(Current, *(EIF_NATURAL_64 *)arg1, arg2, arg3);
}
static void F780_5475_4709_20 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F780_5475(Current, *(EIF_INTEGER_32 *)arg1, arg2, arg3);
}
static void F781_5475_4709_20 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F781_5475(Current, *(EIF_BOOLEAN *)arg1, arg2, arg3);
}
static void F782_5475_4709_20 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F782_5475(Current, *(EIF_CHARACTER_8 *)arg1, arg2, arg3);
}
static void F783_5475_4709_20 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F783_5475(Current, *(EIF_NATURAL_8 *)arg1, arg2, arg3);
}
static void F784_5475_4709_20 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F784_5475(Current, *(EIF_POINTER *)arg1, arg2, arg3);
}
static void F785_5475_4709_20 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F785_5475(Current, *(EIF_NATURAL_32 *)arg1, arg2, arg3);
}
static void F786_5475_4709_20 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F786_5475(Current, *(EIF_INTEGER_8 *)arg1, arg2, arg3);
}
static void F787_5475_4709_20 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F787_5475(Current, *(EIF_REAL_32 *)arg1, arg2, arg3);
}
static void F788_5475_4709_20 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F788_5475(Current, *(EIF_REAL_64 *)arg1, arg2, arg3);
}
static void F789_5475_4709_20 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F789_5475(Current, *(EIF_INTEGER_16 *)arg1, arg2, arg3);
}
static void F790_5475_4709_20 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F790_5475(Current, *(EIF_INTEGER_64 *)arg1, arg2, arg3);
}
static void F791_5475_4709_20 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F791_5475(Current, *(EIF_NATURAL_16 *)arg1, arg2, arg3);
}
static void F792_5475_4709_20 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F792_5475(Current, *(EIF_CHARACTER_32 *)arg1, arg2, arg3);
}

char *(*R4711[19])();
void R4711_init () {
	R4711[0] = (char *(*)()) F778_5478;
	R4711[1] = (char *(*)()) F779_5478;
	R4711[2] = (char *(*)()) F780_5478;
	R4711[3] = (char *(*)()) F781_5478;
	R4711[4] = (char *(*)()) F782_5478;
	R4711[5] = (char *(*)()) F783_5478;
	R4711[6] = (char *(*)()) F784_5478;
	R4711[7] = (char *(*)()) F785_5478;
	R4711[8] = (char *(*)()) F786_5478;
	R4711[9] = (char *(*)()) F787_5478;
	R4711[10] = (char *(*)()) F788_5478;
	R4711[11] = (char *(*)()) F789_5478;
	R4711[12] = (char *(*)()) F790_5478;
	R4711[13] = (char *(*)()) F791_5478;
	R4711[14] = (char *(*)()) F792_5478;
	R4711[15] = (char *(*)()) F778_5478;
	R4711[16] = (char *(*)()) F780_5478;
	R4711[17] = (char *(*)()) F781_5478;
	R4711[18] = (char *(*)()) F786_5478;
}

char *(*R4715[19])();
void R4715_init () {
	R4715[0] = (char *(*)()) F778_5484;
	R4715[1] = (char *(*)()) F779_5484;
	R4715[2] = (char *(*)()) F780_5484;
	R4715[3] = (char *(*)()) F781_5484;
	R4715[4] = (char *(*)()) F782_5484;
	R4715[5] = (char *(*)()) F783_5484;
	R4715[6] = (char *(*)()) F784_5484;
	R4715[7] = (char *(*)()) F785_5484;
	R4715[8] = (char *(*)()) F786_5484;
	R4715[9] = (char *(*)()) F787_5484;
	R4715[10] = (char *(*)()) F788_5484;
	R4715[11] = (char *(*)()) F789_5484;
	R4715[12] = (char *(*)()) F790_5484;
	R4715[13] = (char *(*)()) F791_5484;
	R4715[14] = (char *(*)()) F792_5484;
	R4715[15] = (char *(*)()) F778_5484;
	R4715[16] = (char *(*)()) F780_5484;
	R4715[17] = (char *(*)()) F781_5484;
	R4715[18] = (char *(*)()) F786_5484;
}

char *(*R4716[19])();
void R4716_init () {
	R4716[0] = (char *(*)()) F778_5487;
	R4716[1] = (char *(*)()) F779_5487;
	R4716[2] = (char *(*)()) F780_5487;
	R4716[3] = (char *(*)()) F781_5487;
	R4716[4] = (char *(*)()) F782_5487;
	R4716[5] = (char *(*)()) F783_5487;
	R4716[6] = (char *(*)()) F784_5487;
	R4716[7] = (char *(*)()) F785_5487;
	R4716[8] = (char *(*)()) F786_5487;
	R4716[9] = (char *(*)()) F787_5487;
	R4716[10] = (char *(*)()) F788_5487;
	R4716[11] = (char *(*)()) F789_5487;
	R4716[12] = (char *(*)()) F790_5487;
	R4716[13] = (char *(*)()) F791_5487;
	R4716[14] = (char *(*)()) F792_5487;
	R4716[15] = (char *(*)()) F778_5487;
	R4716[16] = (char *(*)()) F780_5487;
	R4716[17] = (char *(*)()) F781_5487;
	R4716[18] = (char *(*)()) F786_5487;
}

char *(*R4719[4])();
void R4719_init () {
	R4719[0] = (char *(*)()) F793_5488;
	R4719[1] = (char *(*)()) F794_5488;
	R4719[2] = (char *(*)()) F795_5488;
	R4719[3] = (char *(*)()) F796_5488;
}

char *(*R4720[26])();
void R4720_init () {
	R4720[0] = (char *(*)()) F857_5542;
	R4720[1] = (char *(*)()) F858_5542_4720_1;
	R4720[10] = (char *(*)()) F867_5793;
	R4720[11] = (char *(*)()) F868_5793_4720_1;
	R4720[12] = (char *(*)()) F869_5793_4720_1;
	R4720[13] = (char *(*)()) F870_5793_4720_1;
	R4720[14] = (char *(*)()) F871_5793_4720_1;
	R4720[15] = (char *(*)()) F872_5793_4720_1;
	R4720[16] = (char *(*)()) F873_5793_4720_1;
	R4720[17] = (char *(*)()) F874_5793_4720_1;
	R4720[18] = (char *(*)()) F875_5793_4720_1;
	R4720[19] = (char *(*)()) F876_5793_4720_1;
	R4720[20] = (char *(*)()) F877_5793_4720_1;
	R4720[21] = (char *(*)()) F878_5793_4720_1;
	R4720[22] = (char *(*)()) F879_5793_4720_1;
	R4720[23] = (char *(*)()) F880_5793_4720_1;
	R4720[24] = (char *(*)()) F881_5793_4720_1;
	R4720[25] = (char *(*)()) F867_5793;
}
static EIF_REFERENCE F858_5542_4720_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F858_5542(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(1005, 0x00).id, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F868_5793_4720_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F868_5793(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(1014, 0x00).id, 1014, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F869_5793_4720_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F869_5793(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(1005, 0x00).id, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F870_5793_4720_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F870_5793(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(1035, 0x00).id, 1035, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F871_5793_4720_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F871_5793(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(1032, 0x00).id, 1032, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F872_5793_4720_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F872_5793(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(1020, 0x00).id, 1020, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F873_5793_4720_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F873_5793(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(1068, 0x00).id, 1068, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F874_5793_4720_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F874_5793(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(1017, 0x00).id, 1017, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F875_5793_4720_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F875_5793(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(1011, 0x00).id, 1011, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F876_5793_4720_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F876_5793(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(1023, 0x00).id, 1023, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F877_5793_4720_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F877_5793(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(1026, 0x00).id, 1026, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F878_5793_4720_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F878_5793(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(1008, 0x00).id, 1008, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F879_5793_4720_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F879_5793(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(1002, 0x00).id, 1002, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F880_5793_4720_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F880_5793(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(999, 0x00).id, 999, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F881_5793_4720_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F881_5793(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(1029, 0x00).id, 1029, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}

char *(*R4721[26])();
void R4721_init () {
	R4721[0] = (char *(*)()) F857_5543;
	R4721[1] = (char *(*)()) F858_5543_4721_1;
	R4721[10] = (char *(*)()) F867_5794;
	R4721[11] = (char *(*)()) F868_5794_4721_1;
	R4721[12] = (char *(*)()) F869_5794_4721_1;
	R4721[13] = (char *(*)()) F870_5794_4721_1;
	R4721[14] = (char *(*)()) F871_5794_4721_1;
	R4721[15] = (char *(*)()) F872_5794_4721_1;
	R4721[16] = (char *(*)()) F873_5794_4721_1;
	R4721[17] = (char *(*)()) F874_5794_4721_1;
	R4721[18] = (char *(*)()) F875_5794_4721_1;
	R4721[19] = (char *(*)()) F876_5794_4721_1;
	R4721[20] = (char *(*)()) F877_5794_4721_1;
	R4721[21] = (char *(*)()) F878_5794_4721_1;
	R4721[22] = (char *(*)()) F879_5794_4721_1;
	R4721[23] = (char *(*)()) F880_5794_4721_1;
	R4721[24] = (char *(*)()) F881_5794_4721_1;
	R4721[25] = (char *(*)()) F867_5794;
}
static EIF_REFERENCE F858_5543_4721_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F858_5543(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(1005, 0x00).id, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F868_5794_4721_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F868_5794(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(1014, 0x00).id, 1014, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F869_5794_4721_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F869_5794(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(1005, 0x00).id, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F870_5794_4721_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F870_5794(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(1035, 0x00).id, 1035, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F871_5794_4721_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F871_5794(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(1032, 0x00).id, 1032, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F872_5794_4721_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F872_5794(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(1020, 0x00).id, 1020, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F873_5794_4721_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F873_5794(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(1068, 0x00).id, 1068, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F874_5794_4721_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F874_5794(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(1017, 0x00).id, 1017, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F875_5794_4721_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F875_5794(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(1011, 0x00).id, 1011, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F876_5794_4721_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F876_5794(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(1023, 0x00).id, 1023, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F877_5794_4721_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F877_5794(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(1026, 0x00).id, 1026, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F878_5794_4721_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F878_5794(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(1008, 0x00).id, 1008, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F879_5794_4721_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F879_5794(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(1002, 0x00).id, 1002, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F880_5794_4721_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F880_5794(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(999, 0x00).id, 999, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F881_5794_4721_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F881_5794(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(1029, 0x00).id, 1029, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}

char *(*R4722[26])();
void R4722_init () {
	R4722[0] = (char *(*)()) F857_5562;
	R4722[1] = (char *(*)()) F858_5562;
	R4722[10] = (char *(*)()) F867_5815;
	R4722[11] = (char *(*)()) F868_5815;
	R4722[12] = (char *(*)()) F869_5815;
	R4722[13] = (char *(*)()) F870_5815;
	R4722[14] = (char *(*)()) F871_5815;
	R4722[15] = (char *(*)()) F872_5815;
	R4722[16] = (char *(*)()) F873_5815;
	R4722[17] = (char *(*)()) F874_5815;
	R4722[18] = (char *(*)()) F875_5815;
	R4722[19] = (char *(*)()) F876_5815;
	R4722[20] = (char *(*)()) F877_5815;
	R4722[21] = (char *(*)()) F878_5815;
	R4722[22] = (char *(*)()) F879_5815;
	R4722[23] = (char *(*)()) F880_5815;
	R4722[24] = (char *(*)()) F881_5815;
	R4722[25] = (char *(*)()) F867_5815;
}

char *(*R4723[26])();
void R4723_init () {
	R4723[0] = (char *(*)()) F857_5563;
	R4723[1] = (char *(*)()) F858_5563;
	R4723[10] = (char *(*)()) F867_5820;
	R4723[11] = (char *(*)()) F868_5820;
	R4723[12] = (char *(*)()) F869_5820;
	R4723[13] = (char *(*)()) F870_5820;
	R4723[14] = (char *(*)()) F871_5820;
	R4723[15] = (char *(*)()) F872_5820;
	R4723[16] = (char *(*)()) F873_5820;
	R4723[17] = (char *(*)()) F874_5820;
	R4723[18] = (char *(*)()) F875_5820;
	R4723[19] = (char *(*)()) F876_5820;
	R4723[20] = (char *(*)()) F877_5820;
	R4723[21] = (char *(*)()) F878_5820;
	R4723[22] = (char *(*)()) F879_5820;
	R4723[23] = (char *(*)()) F880_5820;
	R4723[24] = (char *(*)()) F881_5820;
	R4723[25] = (char *(*)()) F867_5820;
}

char *(*R4724[26])();
void R4724_init () {
	R4724[0] = (char *(*)()) F857_5553;
	R4724[1] = (char *(*)()) F858_5553;
	R4724[10] = (char *(*)()) F797_5502;
	R4724[11] = (char *(*)()) F798_5502;
	R4724[12] = (char *(*)()) F799_5502;
	R4724[13] = (char *(*)()) F800_5502;
	R4724[14] = (char *(*)()) F801_5502;
	R4724[15] = (char *(*)()) F802_5502;
	R4724[16] = (char *(*)()) F803_5502;
	R4724[17] = (char *(*)()) F804_5502;
	R4724[18] = (char *(*)()) F805_5502;
	R4724[19] = (char *(*)()) F806_5502;
	R4724[20] = (char *(*)()) F807_5502;
	R4724[21] = (char *(*)()) F808_5502;
	R4724[22] = (char *(*)()) F809_5502;
	R4724[23] = (char *(*)()) F810_5502;
	R4724[24] = (char *(*)()) F811_5502;
	R4724[25] = (char *(*)()) F797_5502;
}

char *(*R4725[26])();
void R4725_init () {
	R4725[0] = (char *(*)()) F857_5554;
	R4725[1] = (char *(*)()) F858_5554;
	R4725[10] = (char *(*)()) F797_5503;
	R4725[11] = (char *(*)()) F798_5503;
	R4725[12] = (char *(*)()) F799_5503;
	R4725[13] = (char *(*)()) F800_5503;
	R4725[14] = (char *(*)()) F801_5503;
	R4725[15] = (char *(*)()) F802_5503;
	R4725[16] = (char *(*)()) F803_5503;
	R4725[17] = (char *(*)()) F804_5503;
	R4725[18] = (char *(*)()) F805_5503;
	R4725[19] = (char *(*)()) F806_5503;
	R4725[20] = (char *(*)()) F807_5503;
	R4725[21] = (char *(*)()) F808_5503;
	R4725[22] = (char *(*)()) F809_5503;
	R4725[23] = (char *(*)()) F810_5503;
	R4725[24] = (char *(*)()) F811_5503;
	R4725[25] = (char *(*)()) F797_5503;
}

char *(*R4726[26])();
void R4726_init () {
	R4726[0] = (char *(*)()) F797_5505;
	R4726[1] = (char *(*)()) F799_5505;
	R4726[10] = (char *(*)()) F797_5505;
	R4726[11] = (char *(*)()) F798_5505;
	R4726[12] = (char *(*)()) F799_5505;
	R4726[13] = (char *(*)()) F800_5505;
	R4726[14] = (char *(*)()) F801_5505;
	R4726[15] = (char *(*)()) F802_5505;
	R4726[16] = (char *(*)()) F803_5505;
	R4726[17] = (char *(*)()) F804_5505;
	R4726[18] = (char *(*)()) F805_5505;
	R4726[19] = (char *(*)()) F806_5505;
	R4726[20] = (char *(*)()) F807_5505;
	R4726[21] = (char *(*)()) F808_5505;
	R4726[22] = (char *(*)()) F809_5505;
	R4726[23] = (char *(*)()) F810_5505;
	R4726[24] = (char *(*)()) F811_5505;
	R4726[25] = (char *(*)()) F797_5505;
}

char *(*R4730[26])();
void R4730_init () {
	R4730[0] = (char *(*)()) F857_5565;
	R4730[1] = (char *(*)()) F858_5565_4730_4;
	R4730[10] = (char *(*)()) F867_5823;
	R4730[11] = (char *(*)()) F868_5823_4730_4;
	R4730[12] = (char *(*)()) F869_5823_4730_4;
	R4730[13] = (char *(*)()) F870_5823_4730_4;
	R4730[14] = (char *(*)()) F871_5823_4730_4;
	R4730[15] = (char *(*)()) F872_5823_4730_4;
	R4730[16] = (char *(*)()) F873_5823_4730_4;
	R4730[17] = (char *(*)()) F874_5823_4730_4;
	R4730[18] = (char *(*)()) F875_5823_4730_4;
	R4730[19] = (char *(*)()) F876_5823_4730_4;
	R4730[20] = (char *(*)()) F877_5823_4730_4;
	R4730[21] = (char *(*)()) F878_5823_4730_4;
	R4730[22] = (char *(*)()) F879_5823_4730_4;
	R4730[23] = (char *(*)()) F880_5823_4730_4;
	R4730[24] = (char *(*)()) F881_5823_4730_4;
	R4730[25] = (char *(*)()) F867_5823;
}
static void F858_5565_4730_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F858_5565(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F868_5823_4730_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F868_5823(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F869_5823_4730_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F869_5823(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F870_5823_4730_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F870_5823(Current, *(EIF_BOOLEAN *)arg1);
}
static void F871_5823_4730_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F871_5823(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F872_5823_4730_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F872_5823(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F873_5823_4730_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F873_5823(Current, *(EIF_POINTER *)arg1);
}
static void F874_5823_4730_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F874_5823(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F875_5823_4730_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F875_5823(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F876_5823_4730_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F876_5823(Current, *(EIF_REAL_32 *)arg1);
}
static void F877_5823_4730_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F877_5823(Current, *(EIF_REAL_64 *)arg1);
}
static void F878_5823_4730_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F878_5823(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F879_5823_4730_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F879_5823(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F880_5823_4730_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F880_5823(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F881_5823_4730_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F881_5823(Current, *(EIF_CHARACTER_32 *)arg1);
}

char *(*R4731[26])();
void R4731_init () {
	R4731[0] = (char *(*)()) F857_5567;
	R4731[1] = (char *(*)()) F858_5567_4731_4;
	R4731[10] = (char *(*)()) F867_5827;
	R4731[11] = (char *(*)()) F868_5827_4731_4;
	R4731[12] = (char *(*)()) F869_5827_4731_4;
	R4731[13] = (char *(*)()) F870_5827_4731_4;
	R4731[14] = (char *(*)()) F871_5827_4731_4;
	R4731[15] = (char *(*)()) F872_5827_4731_4;
	R4731[16] = (char *(*)()) F873_5827_4731_4;
	R4731[17] = (char *(*)()) F874_5827_4731_4;
	R4731[18] = (char *(*)()) F875_5827_4731_4;
	R4731[19] = (char *(*)()) F876_5827_4731_4;
	R4731[20] = (char *(*)()) F877_5827_4731_4;
	R4731[21] = (char *(*)()) F878_5827_4731_4;
	R4731[22] = (char *(*)()) F879_5827_4731_4;
	R4731[23] = (char *(*)()) F880_5827_4731_4;
	R4731[24] = (char *(*)()) F881_5827_4731_4;
	R4731[25] = (char *(*)()) F867_5827;
}
static void F858_5567_4731_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F858_5567(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F868_5827_4731_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F868_5827(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F869_5827_4731_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F869_5827(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F870_5827_4731_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F870_5827(Current, *(EIF_BOOLEAN *)arg1);
}
static void F871_5827_4731_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F871_5827(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F872_5827_4731_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F872_5827(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F873_5827_4731_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F873_5827(Current, *(EIF_POINTER *)arg1);
}
static void F874_5827_4731_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F874_5827(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F875_5827_4731_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F875_5827(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F876_5827_4731_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F876_5827(Current, *(EIF_REAL_32 *)arg1);
}
static void F877_5827_4731_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F877_5827(Current, *(EIF_REAL_64 *)arg1);
}
static void F878_5827_4731_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F878_5827(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F879_5827_4731_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F879_5827(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F880_5827_4731_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F880_5827(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F881_5827_4731_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F881_5827(Current, *(EIF_CHARACTER_32 *)arg1);
}

char *(*R4732[26])();
void R4732_init () {
	R4732[0] = (char *(*)()) F857_5568;
	R4732[1] = (char *(*)()) F858_5568_4732_4;
	R4732[10] = (char *(*)()) F867_5828;
	R4732[11] = (char *(*)()) F868_5828_4732_4;
	R4732[12] = (char *(*)()) F869_5828_4732_4;
	R4732[13] = (char *(*)()) F870_5828_4732_4;
	R4732[14] = (char *(*)()) F871_5828_4732_4;
	R4732[15] = (char *(*)()) F872_5828_4732_4;
	R4732[16] = (char *(*)()) F873_5828_4732_4;
	R4732[17] = (char *(*)()) F874_5828_4732_4;
	R4732[18] = (char *(*)()) F875_5828_4732_4;
	R4732[19] = (char *(*)()) F876_5828_4732_4;
	R4732[20] = (char *(*)()) F877_5828_4732_4;
	R4732[21] = (char *(*)()) F878_5828_4732_4;
	R4732[22] = (char *(*)()) F879_5828_4732_4;
	R4732[23] = (char *(*)()) F880_5828_4732_4;
	R4732[24] = (char *(*)()) F881_5828_4732_4;
	R4732[25] = (char *(*)()) F867_5828;
}
static void F858_5568_4732_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F858_5568(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F868_5828_4732_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F868_5828(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F869_5828_4732_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F869_5828(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F870_5828_4732_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F870_5828(Current, *(EIF_BOOLEAN *)arg1);
}
static void F871_5828_4732_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F871_5828(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F872_5828_4732_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F872_5828(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F873_5828_4732_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F873_5828(Current, *(EIF_POINTER *)arg1);
}
static void F874_5828_4732_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F874_5828(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F875_5828_4732_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F875_5828(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F876_5828_4732_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F876_5828(Current, *(EIF_REAL_32 *)arg1);
}
static void F877_5828_4732_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F877_5828(Current, *(EIF_REAL_64 *)arg1);
}
static void F878_5828_4732_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F878_5828(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F879_5828_4732_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F879_5828(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F880_5828_4732_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F880_5828(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F881_5828_4732_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F881_5828(Current, *(EIF_CHARACTER_32 *)arg1);
}

char *(*R4734[26])();
void R4734_init () {
	R4734[0] = (char *(*)()) F857_5571;
	R4734[1] = (char *(*)()) F858_5571;
	R4734[10] = (char *(*)()) F867_5831;
	R4734[11] = (char *(*)()) F868_5831;
	R4734[12] = (char *(*)()) F869_5831;
	R4734[13] = (char *(*)()) F870_5831;
	R4734[14] = (char *(*)()) F871_5831;
	R4734[15] = (char *(*)()) F872_5831;
	R4734[16] = (char *(*)()) F873_5831;
	R4734[17] = (char *(*)()) F874_5831;
	R4734[18] = (char *(*)()) F875_5831;
	R4734[19] = (char *(*)()) F876_5831;
	R4734[20] = (char *(*)()) F877_5831;
	R4734[21] = (char *(*)()) F878_5831;
	R4734[22] = (char *(*)()) F879_5831;
	R4734[23] = (char *(*)()) F880_5831;
	R4734[24] = (char *(*)()) F881_5831;
	R4734[25] = (char *(*)()) F867_5831;
}

char *(*R4736[26])();
void R4736_init () {
	R4736[0] = (char *(*)()) F857_5574;
	R4736[1] = (char *(*)()) F858_5574;
	R4736[10] = (char *(*)()) F867_5843;
	R4736[11] = (char *(*)()) F868_5843;
	R4736[12] = (char *(*)()) F869_5843;
	R4736[13] = (char *(*)()) F870_5843;
	R4736[14] = (char *(*)()) F871_5843;
	R4736[15] = (char *(*)()) F872_5843;
	R4736[16] = (char *(*)()) F873_5843;
	R4736[17] = (char *(*)()) F874_5843;
	R4736[18] = (char *(*)()) F875_5843;
	R4736[19] = (char *(*)()) F876_5843;
	R4736[20] = (char *(*)()) F877_5843;
	R4736[21] = (char *(*)()) F878_5843;
	R4736[22] = (char *(*)()) F879_5843;
	R4736[23] = (char *(*)()) F880_5843;
	R4736[24] = (char *(*)()) F881_5843;
	R4736[25] = (char *(*)()) F867_5843;
}

char *(*R4737[26])();
void R4737_init () {
	R4737[0] = (char *(*)()) F857_5577;
	R4737[1] = (char *(*)()) F858_5577;
	R4737[10] = (char *(*)()) F867_5847;
	R4737[11] = (char *(*)()) F868_5847;
	R4737[12] = (char *(*)()) F869_5847;
	R4737[13] = (char *(*)()) F870_5847;
	R4737[14] = (char *(*)()) F871_5847;
	R4737[15] = (char *(*)()) F872_5847;
	R4737[16] = (char *(*)()) F873_5847;
	R4737[17] = (char *(*)()) F874_5847;
	R4737[18] = (char *(*)()) F875_5847;
	R4737[19] = (char *(*)()) F876_5847;
	R4737[20] = (char *(*)()) F877_5847;
	R4737[21] = (char *(*)()) F878_5847;
	R4737[22] = (char *(*)()) F879_5847;
	R4737[23] = (char *(*)()) F880_5847;
	R4737[24] = (char *(*)()) F881_5847;
	R4737[25] = (char *(*)()) F867_5847;
}

char *(*R4738[2])();
void R4738_init () {
	R4738[0] = (char *(*)()) F857_5539;
	R4738[1] = (char *(*)()) F858_5539;
}

char *(*R4741[2])();
void R4741_init () {
	R4741[0] = (char *(*)()) F857_5578;
	R4741[1] = (char *(*)()) F858_5578_4741_5;
}
static EIF_REFERENCE F858_5578_4741_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F858_5578(Current, *(EIF_INTEGER_32 *)arg1);
}

char *(*R4742[2])();
void R4742_init () {
	R4742[0] = (char *(*)()) F857_5579;
	R4742[1] = (char *(*)()) F858_5579;
}

char *(*R4743[2])();
void R4743_init () {
	R4743[0] = (char *(*)()) F857_5580;
	R4743[1] = (char *(*)()) F858_5580;
}

char *(*R4745[2])();
void R4745_init () {
	R4745[0] = (char *(*)()) F857_5582;
	R4745[1] = (char *(*)()) F858_5582;
}

char *(*R4746[2])();
void R4746_init () {
	R4746[0] = (char *(*)()) F857_5583;
	R4746[1] = (char *(*)()) F858_5583;
}

char *(*R4747[2])();
void R4747_init () {
	R4747[0] = (char *(*)()) F857_5584;
	R4747[1] = (char *(*)()) F858_5584;
}

char *(*R4861[266])();
void R4861_init () {
	R4861[0] = (char *(*)()) F864_5719;
	R4861[1] = (char *(*)()) F865_5745;
	R4861[2] = (char *(*)()) F864_5719;
	R4861[3] = (char *(*)()) F867_5846;
	R4861[4] = (char *(*)()) F868_5846;
	R4861[5] = (char *(*)()) F869_5846;
	R4861[6] = (char *(*)()) F870_5846;
	R4861[7] = (char *(*)()) F871_5846;
	R4861[8] = (char *(*)()) F872_5846;
	R4861[9] = (char *(*)()) F873_5846;
	R4861[10] = (char *(*)()) F874_5846;
	R4861[11] = (char *(*)()) F875_5846;
	R4861[12] = (char *(*)()) F876_5846;
	R4861[13] = (char *(*)()) F877_5846;
	R4861[14] = (char *(*)()) F878_5846;
	R4861[15] = (char *(*)()) F879_5846;
	R4861[16] = (char *(*)()) F880_5846;
	R4861[17] = (char *(*)()) F881_5846;
	R4861[18] = (char *(*)()) F867_5846;
	{long i; for (i = 19; i < 21; i++) R4861[i] = (char *(*)()) F883_5874;}
	R4861[21] = (char *(*)()) F885_5893;
	R4861[22] = (char *(*)()) F886_5961;
	R4861[23] = (char *(*)()) F887_5961;
	R4861[24] = (char *(*)()) F888_5961;
	R4861[25] = (char *(*)()) F889_5961;
	{long i; for (i = 26; i < 28; i++) R4861[i] = (char *(*)()) F890_5961;}
	{long i; for (i = 28; i < 30; i++) R4861[i] = (char *(*)()) F886_5961;}
	R4861[30] = (char *(*)()) F888_5961;
	R4861[133] = (char *(*)()) F997_6476;
	{long i; for (i = 207; i < 212; i++) R4861[i] = (char *(*)()) F1070_7567;}
	{long i; for (i = 217; i < 219; i++) R4861[i] = (char *(*)()) F1081_7894;}
	R4861[220] = (char *(*)()) F1084_7972;
	R4861[221] = (char *(*)()) F1085_8063;
	{long i; for (i = 253; i < 258; i++) R4861[i] = (char *(*)()) F885_5893;}
	R4861[259] = (char *(*)()) F1123_8812;
	{long i; for (i = 264; i < 266; i++) R4861[i] = (char *(*)()) F1081_7894;}
}


#ifdef __cplusplus
}
#endif

ambient[]={1,1,1,1};
diffuse[]={1,1,1,1};
forcedDiffuse[]={0,0,0,0};
emmisive[]={0,0,0,1};
specular[]={0.45486999,0.45486999,0.45486999,0};
specularPower=220;
PixelShaderID="NormalmapspecularDImap";
VertexShaderID="NormalMap";
class Stage1
{
	texture="CrSk_Land_Rover_RR_Sport_12\data\detali_nohq.paa";
	uvSource="tex";
	class uvTransform
	{
		aside[]={1,0,0};
		up[]={0,1,0};
		dir[]={0,0,0};
		pos[]={0,0,0};
	};
};
class Stage2
{
	texture="CrSk_Land_Rover_RR_Sport_12\data\shared\tex_smdi.paa";
	uvSource="tex";
	class uvTransform
	{
		aside[]={1,0,0};
		up[]={0,1,0};
		dir[]={0,0,0};
		pos[]={0,0,0};
	};
};

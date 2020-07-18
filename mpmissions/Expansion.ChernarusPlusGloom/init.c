	/////////////////////////////////////////////////////////////////
	// Trader collision fix jebote aa!! nema trčanja kroz zidove...
	/////////////////////////////////////////////////////////////////

	//Spawn helper function
	void SpawnObject(string type, vector position, vector orientation)
	{
		auto obj = GetGame().CreateObject(type, position);
		obj.SetPosition(position);
		obj.SetOrientation(orientation);
		obj.SetOrientation(obj.GetOrientation()); //Collision fix
		obj.Update();
		obj.SetAffectPathgraph(true, false);
		if (obj.CanAffectPathgraph()) GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(GetGame().UpdatePathgraphRegionByObject, 100, false, obj);
	}


	//Balkan Warlords Traderi

	//****************************************   Kumyrna Trader  *************************************************//
		//  *** Plakati
			SpawnObject("BW_Plakat_Donor", "8348.090820 294.806915 5977.595215", "-174.000015 0.000000 0.000000");
			SpawnObject("BW_Plakat_Campfire", "8370.416992 294.457306 5978.297852", "-176.999985 0.000000 0.000000");
			SpawnObject("BW_Plakat_Pivo_Sar", "8306.587891 293.153259 6002.224609", "88.000000 0.000000 0.000000");
			SpawnObject("BW_Plakat_Pivo", "8420.218750 293.698517 5993.118164", "-90.000000 0.000000 0.000000");

	//****************************************   Green Mountain Trader  *************************************************//
		//  *** Plakati
			SpawnObject("BW_Plakat_Donor", "3690.929932 402.812012 5981.609863", "-110.000000 0.000000 0.000000");
			SpawnObject("BW_Plakat_PijacZ", "3750.709961 404.907990 5995.060059", "-38.000000 0.000000 0.000000");
			SpawnObject("BW_Plakat_Campfire", "3707.959961 407.860992 6005.229980", "-44.000000 0.000000 0.000000");
			SpawnObject("BW_Plakat_Pivo", "3742.729980 403.983002 6012.049805", "50.000095 0.000000 0.000000");

		//  *** Objekti
			SpawnObject("Wreck_UH1Y", "3685.429932 422.714996 6003.709961", "1.000000 47.000000 0.000000");
			SpawnObject("bldr_wreck_trailer_flat", "3729.189941 403.221985 6001.669922", "-44.000000 0.000000 0.000000");
			SpawnObject("Land_Wreck_hb01_aban2_blue", "3728.090088 403.792999 6003.020020", "-44.000000 0.000000 -4.000000");
			SpawnObject("Land_Construction_Crane", "3690.649902 420.286987 6008.549805", "136.000000 0.000000 0.000000");
			SpawnObject("Land_Tisy_RadarPlatform_Top", "3731.100098 397.050995 6031.890137", "-40.000000 0.000000 0.000000");
			SpawnObject("bldr_Platform2_Stairs_30", "3747.899902 402.100006 6014.810059", "-40.000000 0.000000 0.000000");
			SpawnObject("bldr_Platform2_Stairs_30", "3746.399902 402.100006 6013.560059", "-40.000000 0.000000 0.000000");
			SpawnObject("bldr_Platform2_Stairs_30", "3744.879883 402.100006 6012.250000", "-40.000000 0.000000 0.000000");
			SpawnObject("bldr_Platform1_Stairs_30_WallL", "3743.120117 402.997986 6012.470215", "-40.000000 0.000000 0.000000");
			SpawnObject("bldr_Platform1_Stairs_30_WallL", "3747.969971 402.959991 6016.520020", "-40.000000 0.000000 0.000000");
			SpawnObject("Wreck_Mi8", "3724.620117 406.032013 6037.709961", "162.000000 3.000000 7.000000");
			SpawnObject("Land_Misc_DeerStand1", "3715.169922 405.320007 6008.680176", "-133.000000 0.000000 0.000000");
			SpawnObject("Land_Misc_DeerStand1", "3722.780029 405.479004 6000.140137", "-130.000000 0.000000 0.000000");
			SpawnObject("Land_Misc_DeerStand1", "3722.780029 405.479004 6000.140137", "-130.000000 0.000000 0.000000");
			SpawnObject("bldr_rds_runwayold_40_main", "3728.919922 402.000000 6008.750000", "-42.000000 0.000000 0.000000");
			SpawnObject("bldr_rds_runwayold_40_main", "3693.879883 402.000000 5987.979980", "-42.000000 0.000000 0.000000");
			SpawnObject("bldr_roadblock_cncblock", "3720.030029 400.738007 6027.569824", "47.000000 0.000000 0.000000");
			SpawnObject("bldr_roadblock_cncblock", "3720.600098 400.877991 6025.649902", "-43.000000 0.000000 0.000000");
			SpawnObject("bldr_roadblock_bags_long", "3719.050049 400.843994 6018.939941", "-42.000000 0.000000 0.000000");
			SpawnObject("bldr_roadblock_bags_long", "3711.090088 401.369995 6019.240234", "48.000004 0.000000 0.000000");
			SpawnObject("bldr_roadblock_bags_long", "3751.639893 402.011993 6013.259766", "-44.000000 0.000000 0.000000");
			SpawnObject("bldr_roadblock_bags_long", "3753.909912 402.329010 6011.009766", "-44.000000 0.000000 0.000000");
			SpawnObject("bldr_roadblock_bags_long", "3756.189941 402.654999 6008.709961", "-44.000000 0.000000 0.000000");
			SpawnObject("bldr_roadblock_bags_long", "3756.290039 402.954010 6006.399902", "48.000004 0.000000 0.000000");
			SpawnObject("bldr_roadblock_bags_long", "3749.159912 402.912994 6000.000000", "48.000004 0.000000 0.000000");
			SpawnObject("bldr_roadblock_bags_long", "3751.530029 403.092987 6002.089844", "48.000004 0.000000 0.000000");
			SpawnObject("bldr_roadblock_bags_long", "3753.939941 403.217010 6004.229980", "48.000004 0.000000 0.000000");
			SpawnObject("bldr_roadblock_bags_long", "3746.770020 402.916992 5997.859863", "48.000004 0.000000 0.000000");
			SpawnObject("bldr_roadblock_bags_long", "3735.570068 402.184998 5987.470215", "48.000004 0.000000 0.000000");
			SpawnObject("bldr_roadblock_bags_long", "3738.000000 402.420990 5989.640137", "48.000004 0.000000 0.000000");
			SpawnObject("bldr_roadblock_cncblocks_long", "3746.979980 403.742004 5994.419922", "-40.000000 0.000000 0.000000");
			SpawnObject("bldr_roadblock_cncblocks_short", "3741.689941 403.350006 5989.850098", "-10.000002 0.000000 0.000000");
			SpawnObject("bldr_misc_concreteblock2", "3732.570068 402.674988 6001.379883", "47.000000 0.000000 -4.000000");
			SpawnObject("bldr_misc_concreteblock2", "3734.770020 402.825012 5999.069824", "45.999996 0.000000 -3.000000");
			SpawnObject("bldr_misc_concreteblock2", "3736.919922 402.977997 5996.799805", "45.999996 0.000000 -3.000000");
			SpawnObject("bldr_roadblock_pillbox", "3738.379883 403.619995 5992.759766", "-37.000000 0.000000 0.000000");
			SpawnObject("bldr_sidewalk2_5m", "3711.209961 402.000000 5964.779785", "-19.000000 0.000000 0.000000");
			SpawnObject("bldr_sidewalk2_5m", "3709.590088 402.000000 5969.490234", "-19.000000 0.000000 0.000000");
			SpawnObject("bldr_sidewalk2_5m", "3714.449951 401.983002 5976.959961", "71.000000 0.000000 0.000000");
			SpawnObject("bldr_sidewalk2_5m", "3709.760010 402.000000 5975.370117", "71.000000 0.000000 0.000000");
			SpawnObject("bldr_sidewalk2_5m", "3705.030029 402.000000 5973.750000", "71.000000 0.000000 0.000000");
			SpawnObject("bldr_sidewalk2_5m", "3700.300049 402.000000 5972.120117", "71.000000 0.000000 0.000000");
			SpawnObject("bldr_sidewalk2_5m", "3695.590088 402.000000 5970.509766", "71.000000 0.000000 0.000000");
			SpawnObject("bldr_sidewalk3_wide_12m", "3693.260010 401.846008 5978.990234", "-111.000000 0.000000 0.000000");
			SpawnObject("bldr_sidewalk3_wide_12m", "3689.040039 401.846008 5989.959961", "-111.000000 0.000000 0.000000");
			SpawnObject("bldr_sidewalk3_wide_4m", "3686.370117 401.839996 5996.819824", "-111.000000 0.000000 0.000000");
			SpawnObject("bldr_sidewalk3_wide_corner", "3685.689941 401.822998 5999.470215", "-111.000000 0.000000 0.000000");
			SpawnObject("bldr_sidewalk3_wide_12m", "3679.260010 401.846008 5996.839844", "161.000000 0.000000 0.000000");
			SpawnObject("Land_Repair_Center", "3703.610107 404.471008 5967.509766", "161.000000 0.000000 0.000000");
			SpawnObject("Land_Tank_Medium_Stairs", "3715.520020 403.359985 5974.640137", "162.000000 0.000000 0.000000");
			SpawnObject("Land_Mil_Fortified_Nest_Small", "3714.879883 401.381012 6020.540039", "136.000000 0.000000 0.000000");
			SpawnObject("Land_Medical_Tent_Big", "3717.959961 402.079987 5969.790039", "-19.000000 0.000000 0.000000");
			SpawnObject("Land_Misc_TrailRoof_Big", "3688.639893 403.790985 6006.629883", "-131.000000 0.000000 0.000000");
			SpawnObject("Land_Wreck_Trailer_Closed", "3700.860107 403.000000 5999.850098", "0.000000 0.000000 0.000000");
			SpawnObject("Land_Wreck_sed02_aban1_yellow", "3693.979980 402.860992 5970.629883", "-19.000000 0.000000 0.000000");
			SpawnObject("Land_Wreck_hb02_aban2_red", "3697.340088 402.704010 5970.839844", "-19.000000 0.000000 0.000000");
			SpawnObject("Land_Wreck_hb01_aban2_blue", "3691.949951 402.931000 5969.439941", "-19.000000 0.000000 -2.000000");
			SpawnObject("bldr_sidewalk2_5m", "3690.860107 402.000000 5968.890137", "71.000000 0.000000 0.000000");
			SpawnObject("bldr_Dead_MassGrave_8m", "3695.870117 402.234009 5964.970215", "-20.000000 0.000000 0.000000");
			SpawnObject("bldr_Dead_MassGrave", "3694.949951 402.244995 5960.640137", "0.000000 0.000000 0.000000");
			SpawnObject("bldr_Dead_MassGrave", "3690.810059 402.295013 5962.959961", "0.000000 0.000000 0.000000");
			SpawnObject("bldr_Dead_MassGrave_15m", "3709.310059 402.214996 6016.189941", "47.000000 0.000000 0.000000");
			SpawnObject("bldr_Dead_MassGrave_15m", "3729.719971 402.397003 5993.740234", "48.000004 2.000000 -1.000000");
			SpawnObject("bldr_plnt_l_long_pile_b", "3706.879883 402.093994 5987.129883", "-76.000000 0.000000 0.000000");
			SpawnObject("bldr_plnt_t_BetulaPendula_2fc", "3700.139893 409.183990 5961.890137", "0.000000 0.000000 0.000000");
			SpawnObject("bldr_plnt_t_BetulaPendula_2s", "3706.909912 409.226990 5961.509766", "0.000000 0.000000 0.000000");
			SpawnObject("bldr_plnt_t_BetulaPendula_2fb", "3718.179932 411.088013 5964.839844", "0.000000 0.000000 0.000000");
			SpawnObject("bldr_plnt_t_BetulaPendula_2f", "3721.179932 409.739014 5962.950195", "0.000000 0.000000 0.000000");
			SpawnObject("bldr_plnt_t_BetulaPendula_2f", "3712.300049 409.751007 5972.470215", "0.000000 0.000000 0.000000");
			SpawnObject("bldr_plnt_t_BetulaPendula_2fc", "3690.260010 409.183990 6012.700195", "0.000000 0.000000 0.000000");
			SpawnObject("bldr_plnt_t_BetulaPendula_2s", "3703.040039 409.226990 6016.430176", "0.000000 0.000000 0.000000");
			SpawnObject("bldr_plnt_t_BetulaPendula_3f", "3728.639893 413.351990 5968.959961", "0.000000 0.000000 0.000000");
			SpawnObject("bldr_plnt_t_BetulaPendula_3f", "3711.639893 413.351990 6009.529785", "0.000000 0.000000 0.000000");
			SpawnObject("bldr_plnt_poison_ivy", "3686.870117 396.901001 5994.290039", "70.000000 0.000000 0.000000");
			SpawnObject("bldr_plnt_d_piceaabies_fallend", "3707.300049 402.890015 6035.250000", "-33.000000 0.000000 -32.000004");
			SpawnObject("bldr_plnt_d_BetulaPendula_fallen", "3704.350098 401.436005 6033.660156", "39.000000 0.000000 -16.000002");
			SpawnObject("bldr_plnt_d_piceaabies_stumpc", "3700.959961 400.372986 6036.930176", "0.000000 0.000000 0.000000");
			SpawnObject("bldr_plnt_t_salixAlba_2sb_summer", "3710.659912 404.592010 6045.319824", "0.000000 0.000000 0.000000");
			SpawnObject("bldr_plnt_t_pyrusCommunis_3s_summer", "3701.169922 406.684998 6035.939941", "0.000000 0.000000 0.000000");
			SpawnObject("bldr_plnt_t_pyrusCommunis_3s_summer", "3740.770020 408.575012 5986.029785", "0.000000 0.000000 0.000000");
			SpawnObject("bldr_plnt_t_pyrusCommunis_2s_summer", "3747.419922 406.625000 5996.319824", "0.000000 0.000000 0.000000");
			SpawnObject("bldr_plnt_t_PinusSylvestris_3d_summer", "3754.280029 411.479004 6002.500000", "0.000000 0.000000 0.000000");
			SpawnObject("bldr_plnt_t_PinusSylvestris_2sb_summer", "3751.979980 410.755005 5998.129883", "0.000000 0.000000 0.000000");
			SpawnObject("bldr_plnt_t_PiceaAbies_1s_summer", "3756.280029 404.894989 5998.250000", "0.000000 0.000000 0.000000");
			SpawnObject("bldr_plnt_t_PiceaAbies_1f_summer", "3756.919922 406.720001 6002.899902", "0.000000 0.000000 0.000000");
			SpawnObject("bldr_wreck_decal_big", "3698.409912 402.023987 5980.910156", "-17.000000 0.000000 0.000000");
			SpawnObject("bldr_wreck_decal_small1", "3729.262695 402.067413 6004.793457", "-34.000000 -3.000000 0.000000");
			SpawnObject("bldr_Misc_DeconShower_Large", "3718.552490 405.323242 6004.150391", "48.000004 0.000000 0.000000");
			SpawnObject("bldr_misc_tirepile", "3687.205322 406.280640 6003.108398", "0.000000 0.000000 0.000000");
			SpawnObject("bldr_Garbage_Pile8", "3688.053467 402.462311 6008.905273", "-50.000004 0.000000 0.000000");
			SpawnObject("bldr_plnt_l_long_pile_b", "3706.364258 402.094025 5982.494141", "0.000000 0.000000 0.000000");
			SpawnObject("bldr_plnt_l_long_pile_a", "3706.454590 402.129974 5985.120605", "147.000015 0.000000 0.000000");
			SpawnObject("bldr_plnt_l_long_pile_b", "3703.605713 402.094025 5976.578613", "0.000000 0.000000 0.000000");
			SpawnObject("bldr_plnt_l_long_pile_a", "3697.370605 402.129974 5974.806641", "0.000000 0.000000 0.000000");
			SpawnObject("bldr_plnt_l_long_pile_a", "3717.032471 401.879028 6006.774414", "0.000000 0.000000 0.000000");
			SpawnObject("bldr_misc_woodpile_forest1", "3700.974121 403.955353 6000.687012", "88.000000 0.000000 0.000000");
			SpawnObject("bldr_Garbage_Pile7", "3691.225098 402.527069 6008.423340", "52.999996 0.000000 0.000000");
			SpawnObject("bldr_plnt_l_long_pile_a", "3690.964844 402.229950 5984.770508", "0.000000 0.000000 0.000000");
			SpawnObject("bldr_plnt_l_long_pile_b", "3691.244873 402.194000 5986.708008", "60.999996 0.000000 0.000000");
			SpawnObject("bldr_Misc_WoodTable_Indoor", "3692.590820 402.378265 5992.169434", "-21.000008 0.000000 0.000000");
			SpawnObject("bldr_Misc_CinderBlocks", "3688.769287 402.852234 6002.223633", "0.000000 0.000000 0.000000");
			SpawnObject("Land_Roadblock_WoodenCrate", "3687.840332 403.197968 6006.212891", "0.000000 0.000000 0.000000");
			SpawnObject("bldr_misc_concreteblock2_stripes", "3701.911865 402.385681 5979.598633", "70.000000 0.000000 0.000000");
			SpawnObject("bldr_misc_concreteblock2_stripes", "3700.249268 402.385681 5984.153809", "70.000000 0.000000 0.000000");
			SpawnObject("bldr_Wall_CncBarrier_Block", "3720.801514 401.961426 6015.575195", "81.000000 0.000000 -3.000000");
			SpawnObject("bldr_Wall_CncBarrier_Block", "3720.428955 402.067871 6013.274414", "-65.000000 0.000000 3.000026");
			SpawnObject("bldr_Wall_CncBarrier_Block", "3719.294922 402.250153 6011.189453", "-59.999992 0.000000 6.000000");
			SpawnObject("bldr_Wall_CncBarrier_Block", "3709.589111 402.846191 5962.722656", "49.000000 0.000000 0.000000");
			SpawnObject("bldr_Wall_CncBarrier_Block", "3711.449707 402.846191 5962.717773", "-20.000006 0.000000 0.000000");
			SpawnObject("bldr_misc_concreteblock2_stripes", "3713.064697 402.385681 5964.176758", "32.000004 0.000000 0.000000");
			SpawnObject("bldr_misc_concreteblock2_stripes", "3712.523193 402.385681 5963.591309", "21.000008 0.000000 0.000000");
			SpawnObject("bldr_roadblock_cncblocks_short", "3709.775635 403.712708 5990.323242", "-134.000000 90.000000 179.999985");
			SpawnObject("bldr_roadblock_bags_endl", "3689.088867 403.704865 5986.666992", "175.000000 0.000000 0.000000");
			SpawnObject("bldr_roadblock_bags_endr", "3689.707031 403.684113 5985.309082", "140.000046 0.000000 0.000000");
			SpawnObject("bldr_roadblock_cncblocks_long", "3720.645264 402.687561 5995.365723", "48.000004 1.000000 0.000000");
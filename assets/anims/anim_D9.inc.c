static const struct Animation anim_D9[] = { //Chasing
	 0,			/* attribute       	 */
	 0,							/* syncro			 */
	 0,							/* start frame     	 */
	 0,							/* loop frame		 */
	72,
	20,
	anim_D9_values,
	anim_D9_indices,
	0,
};
static const u16 anim_D9_indices[] = {
	    1,    0,	/* chn14translate x */
	   72,    1,	/* chn14 translate y */
	    1,    0,	/* chn14 translate z */
	    1,    0,	/* chn14 rotate x */
	    1,   73,	/* chn14 rotate y */
	    1,    0,	/* chn14 rotate z */
	    1,    0,	/* <m_waist>1_3 rotate x */
	    1,    0,	/* <m_waist>1_3 rotate y */
	    1, 1247,	/* <m_waist>1_3 rotate z */
	    1,    0,	/* <m_body>1 rotate x */
	    1,    0,	/* <m_body>1 rotate y */
	   72, 1175,	/* <m_body>1 rotate z */
	   72,  959,	/* <m_head>2 rotate x */
	   72, 1031,	/* <m_head>2 rotate y */
	   72, 1103,	/* <m_head>2 rotate z */

	    1,  955,	/* chn6 rotate x */
	    1,  956,	/* chn6 rotate y */
	    1,  957,	/* chn6 rotate z */
	    1,   78,	/* <m_larmA>1 rotate x */
	    1,   79,	/* <m_larmA>1 rotate y */
	    1,   80,	/* <m_larmA>1 rotate z */
	    1,    0,	/* <m_larmB>1 rotate x */
	    1,    0,	/* <m_larmB>1 rotate y */
	    1,   77,	/* <m_larmB>1 rotate z */
	    1,   74,	/* <m_lhand>1 rotate x */
	    1,   75,	/* <m_lhand>1 rotate y */
	    1,   76,	/* <m_lhand>1 rotate z */

	    1,  808,	/* chn10 rotate x */
	    1,  809,	/* chn10 rotate y */
	    1,  810,	/* chn10 rotate z */
	    1,   85,	/* <m_rarmA>1 rotate x */
	    1,   86,	/* <m_rarmA>1 rotate y */
	    1,   87,	/* <m_rarmA>1 rotate z */
	    1,    0,	/* <m_rarmB>1 rotate x */
	    1,    0,	/* <m_rarmB>1 rotate y */
	    1,   84,	/* <m_rarmB>1 rotate z */
	    1,   81,	/* <m_rhand>1 rotate x */
	    1,   82,	/* <m_rhand>1 rotate y */
	    1,   83,	/* <m_rhand>1 rotate z */

	    1,    0,	/* chn15 rotate x */
	   72,  811,	/* chn15 rotate y */
	   72,  883,	/* chn15 rotate z */
	   72,  592,	/* <m_llegA>1 rotate x */
	   72,  664,	/* <m_llegA>1 rotate y */
	   72,  736,	/* <m_llegA>1 rotate z */
	    1,    0,	/* <m_llegB>1 rotate x */
	    1,    0,	/* <m_llegB>1 rotate y */
	   72,  520,	/* <m_llegB>1 rotate z */
	    1,    0,	/* <m_ltoot>1 rotate x */
	    1,    0,	/* <m_ltoot>1 rotate y */
	   72,  448,	/* <m_ltoot>1 rotate z */

	    1,    0,	/* chn17 rotate x */
	    1,    0,	/* chn17 rotate y */
	    1,  958,	/* chn17 rotate z */
	   72,  232,	/* <m_rlegA>1 rotate x */
	   72,  304,	/* <m_rlegA>1 rotate y */
	   72,  376,	/* <m_rlegA>1 rotate z */
	    1,    0,	/* <m_rlegB>1 rotate x */
	    1,    0,	/* <m_rlegB>1 rotate y */
	   72,  160,	/* <m_rlegB>1 rotate z */
	    1,    0,	/* <m_rfoot>1 rotate x */
	    1,    0,	/* <m_rfoot>1 rotate y */
	   72,   88,	/* <m_rfoot>1 rotate z */
};

static const s16 anim_D9_values[] = {
	    0,  192,  191,  187,  183,  180,  177,  174,
	  172,  172,  174,  176,  180,  183,  186,  190,
	  194,  197,  200,  203,  206,  209,  211,  214,
	  216,  217,  217,  217,  217,  216,  215,  214,
	  213,  212,  210,  208,  206,  204,  202,  200,
	  196,  190,  183,  178,  175,  173,  172,  171,
	  171,  173,  175,  178,  182,  188,  194,  198,
	  201,  204,  207,  209,  211,  213,  214,  216,
	  217,  217,  216,  213,  211,  207,  202,  197,
	  195,16383,-1396, 2437,-2941,-6026,35429,-26329,
	-69291, 6404, 3656,-5756,-6131,-8650, 8419,-35987,
	-15533,-15599,-15768,-15999,-16248,-16472,-16630,-16679,
	-16576,-16357,-16090,-15783,-15440,-15067,-14670,-14256,
	-13830,-13398,-12965,-12539,-12124,-11726,-11352,-11007,
	-10697,-10428,-10206,-10037,-9927,-9881,-9882,-9906,
	-9952,-10019,-10106,-10212,-10335,-10475,-10630,-10798,
	-10980,-11173,-11376,-11589,-11809,-12037,-12270,-12507,
	-12748,-12991,-13235,-13479,-13721,-13960,-14196,-14427,
	-14651,-14868,-15077,-15276,-15464,-15639,-15802,-15950,
	-16048,-16075,-16048,-15986,-15906,-15827,-15766,-15741,
	 7065, 7239, 7704, 8373, 9158, 9972,10728,11338,
	11717,11942,12150,12342,12519,12681,12829,12965,
	13088,13199,13299,13389,13470,13541,13605,13661,
	13710,13753,13791,13824,13854,13880,13908,13939,
	13975,14013,14054,14096,14139,14182,14224,14266,
	14305,14342,14375,14404,14429,14448,14462,14468,
	14467,14457,14439,14411,14373,14323,14263,14189,
	14103,14003,13888,13758,13612,13450,13270,13073,
	12578,11618,10356, 8955, 7580, 6395, 5564, 5250,
	  104,  109,  123,  143,  166,  190,  210,  225,
	  232,  230,  223,  211,  196,  180,  164,  149,
	  136,  128,  122,  117,  112,  108,  105,  102,
	  100,   99,   99,  100,  101,  104,  108,  114,
	  121,  130,  139,  149,  159,  169,  179,  187,
	  195,  201,  205,  208,  211,  213,  215,  217,
	  219,  220,  222,  223,  223,  223,  223,  223,
	  222,  221,  220,  218,  216,  214,  211,  207,
	  200,  187,  171,  152,  134,  119,  108,  104,
	    0,   -7,  -29,  -60,  -97, -137, -175, -209,
	 -234, -252, -267, -280, -291, -300, -307, -314,
	 -319, -323, -326, -328, -329, -329, -328, -327,
	 -325, -323, -321, -318, -315, -312, -309, -306,
	 -301, -297, -291, -286, -281, -276, -271, -267,
	 -263, -260, -258, -256, -255, -253, -252, -251,
	 -250, -249, -248, -248, -247, -247, -247, -247,
	 -248, -248, -249, -250, -251, -252, -254, -256,
	 -259, -267, -276, -286, -296, -304, -310, -312,
	-29871,-29840,-29746,-29583,-29346,-29032,-28636,-28152,
	-27577,-26891,-26095,-25213,-24270,-23289,-22295,-21312,
	-20365,-19478,-18570,-17569,-16507,-15420,-14340,-13302,
	-12340,-11488,-10779,-10249,-9930,-9856,-10051,-10489,
	-11134,-11950,-12900,-13949,-15060,-16197,-17324,-18404,
	-19401,-20280,-21003,-21625,-22224,-22800,-23357,-23894,
	-24413,-24916,-25405,-25879,-26342,-26793,-27236,-27670,
	-28097,-28520,-28938,-29354,-29768,-30183,-30599,-31019,
	-31440,-31851,-32238,-32587,-32883,-33112,-33260,-33312,
	-10422,-10554,-10911,-11429,-12047,-12703,-13335,-13882,
	-14281,-14582,-14873,-15153,-15419,-15667,-15898,-16107,
	-16292,-16452,-16583,-16684,-16752,-16784,-16773,-16715,
	-16618,-16487,-16328,-16150,-15957,-15757,-15556,-15361,
	-15178,-15013,-14874,-14766,-14697,-14672,-14698,-14906,
	-15359,-15968,-16640,-17284,-17810,-18126,-18140,-17937,
	-17666,-17333,-16948,-16517,-16048,-15548,-15026,-14487,
	-13941,-13395,-12855,-12330,-11827,-11354,-10918,-10526,
	-10178,-9870,-9602,-9378,-9199,-9069,-8989,-8962,
	15472,15590,15902,16345,16855,17368,17820,18148,
	18288,18323,18369,18413,18443,18447,18411,18323,
	18170,17940,17620,17197,16659,15993,14924,13312,
	11350, 9227, 7136, 5269, 3815, 2967, 2712, 2854,
	 3309, 3994, 4827, 5723, 6600, 7374, 7962, 8432,
	 8896, 9340, 9751,10114,10415,10641,10778,10843,
	10865,10850,10805,10736,10648,10547,10440,10332,
	10229,10137,10063,10011, 9988,10000,10053,10152,
	10409,10880,11487,12155,12807,13367,13760,13907,
	  208,   43, -391,-1010,-1723,-2442,-3079,-3546,
	-3754,-3758,-3679,-3528,-3319,-3063,-2773,-2462,
	-2141,-1823,-1522,-1248,-1014, -834, -710, -632,
	 -591, -578, -584, -600, -616, -623, -631, -650,
	 -679, -713, -749, -782, -810, -828, -834, -822,
	 -793, -754, -709, -665, -626, -599, -589, -593,
	 -604, -621, -643, -669, -697, -726, -756, -784,
	 -811, -833, -852, -864, -870, -868, -856, -834,
	 -772, -656, -504, -337, -173,  -31,   66,  104,
	    0,    6,   20,   38,   54,   64,   61,   42,
	    0,  -61, -135, -219, -311, -408, -509, -612,
	 -715, -815, -910, -998,-1078,-1147,-1202,-1242,
	-1270,-1289,-1299,-1304,-1305,-1305,-1303,-1298,
	-1289,-1277,-1260,-1239,-1213,-1182,-1147,-1101,
	-1042, -974, -903, -832, -766, -710, -668, -636,
	 -606, -577, -551, -526, -502, -480, -460, -440,
	 -422, -404, -387, -371, -356, -341, -327, -312,
	 -302, -296, -296, -298, -302, -307, -311, -312,
	-12765,-13002,-13629,-14522,-15556,-16606,-17547,-18256,
	-18606,-18667,-18603,-18435,-18183,-17867,-17508,-17125,
	-16740,-16371,-16041,-15768,-15573,-15477,-15543,-15784,
	-16145,-16568,-16998,-17378,-17652,-17765,-17740,-17647,
	-17492,-17283,-17028,-16733,-16406,-16054,-15686,-15290,
	-14853,-14378,-13867,-13322,-12746,-12140,-11507,-10851,
	-10176,-9483,-8777,-8059,-7333,-6600,-5864,-5126,
	-4391,-3661,-2937,-2223,-1522, -836, -167,  480,
	 1138, 1816, 2480, 3099, 3637, 4063, 4343, 4443,
	32767,32767,16753,    0, -165, -602,-1221,-1929,
	-2638,-3256,-3693,-3859,-3803,-3647,-3407,-3100,
	-2741,-2348,-1937,-1523,-1124, -756, -435, -177,
	    0,  116,  205,  268,  308,  329,  331,  319,
	  296,  263,  223,  180,  137,   95,   57,   27,
	    7,    0,    0,    0,    0,    0,    0,    0,
	    0,    0,    0,    0,    0,    0,    0,    0,
	    0,    0,    0,    0,    0,    0,    0,    0,
	    0,    0,    0,    0,    0,    0,    0,    0,
	    0,    0,    0,-14876,-14863,-14846,-14860,-14936,
	-15109,-15413,-15880,-16545,-17414,-18449,-19616,-20880,
	-22209,-23567,-24921,-26236,-27479,-28615,-29610,-30431,
	-31043,-31482,-31815,-32052,-32203,-32279,-32289,-32245,
	-32155,-32032,-31884,-31723,-31558,-31400,-31259,-31146,
	-31070,-31043,-31043,-31043,-31043,-31043,-31043,-31043,
	-31043,-31043,-31043,-31043,-31043,-31043,-31043,-31043,
	-31043,-31043,-31043,-31043,-31043,-31043,-31043,-31043,
	-31043,-31043,-31043,-31043,-31043,-31043,-31043,-31043,
	-31043,-31043,-31043,32767,32767,16753,-16545,  535,
	  536,  536,  537,  537,  538,  539,  541,  542,
	  543,  544,  546,  547,  548,  549,  550,  550,
	  551,  551,  551,  551,  550,  549,  549,  548,
	  547,  546,  546,  545,  545,  544,  544,  544,
	  544,  544,  543,  543,  543,  543,  543,  543,
	  543,  543,  542,  542,  542,  542,  542,  541,
	  541,  541,  540,  540,  540,  539,  539,  539,
	  538,  538,  538,  537,  537,  537,  537,  536,
	  536,  536,  536,  536,  536,  535,  535,  170,
	  169,  168,  166,  162,  159,  154,  150,  145,
	  140,  135,  130,  125,  121,  117,  114,  112,
	  110,  110,  110,  112,  114,  117,  120,  124,
	  127,  130,  133,  136,  138,  139,  140,  141,
	  142,  142,  143,  143,  144,  144,  145,  145,
	  146,  146,  147,  147,  148,  148,  149,  150,
	  151,  152,  153,  154,  155,  157,  158,  159,
	  160,  161,  162,  163,  164,  165,  166,  167,
	  168,  168,  169,  169,  170,  170,  170,-6089,
	-6078,-6049,-6004,-5944,-5872,-5791,-5702,-5609,
	-5513,-5417,-5324,-5235,-5153,-5081,-5020,-4973,
	-4943,-4933,-4945,-4974,-5018,-5072,-5134,-5199,
	-5265,-5328,-5384,-5431,-5464,-5487,-5507,-5525,
	-5540,-5554,-5565,-5576,-5585,-5593,-5601,-5609,
	-5617,-5626,-5635,-5646,-5658,-5672,-5688,-5705,
	-5723,-5743,-5763,-5784,-5806,-5828,-5850,-5873,
	-5895,-5916,-5938,-5958,-5978,-5997,-6014,-6030,
	-6045,-6057,-6068,-6077,-6083,-6087,-6089, 6028,
	 6042, 6082, 6144, 6225, 6321, 6431, 6549, 6672,
	 6798, 6923, 7044, 7157, 7259, 7346, 7416, 7464,
	 7488, 7472, 7410, 7311, 7184, 7040, 6888, 6737,
	 6597, 6478, 6389, 6340, 6341, 6386, 6463, 6566,
	 6691, 6833, 6989, 7154, 7323, 7493, 7658, 7814,
	 7957, 8083, 8187, 8264, 8311, 8323, 8305, 8268,
	 8214, 8144, 8060, 7963, 7856, 7740, 7617, 7488,
	 7355, 7220, 7084, 6949, 6818, 6690, 6569, 6456,
	 6353, 6261, 6181, 6117, 6069, 6038, 6028,20808,
};
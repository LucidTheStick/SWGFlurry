MandaloreScreenPlay = ScreenPlay:new {
	numberOfActs = 1,

	screenplayName = "MandaloreScreenPlay"
}

registerScreenPlay("MandaloreScreenPlay", true)

function MandaloreScreenPlay:start()
	if (isZoneEnabled("mandalore")) then
		self:spawnMobiles()
		self:spawnSceneObjects()
	end
end

function MandaloreScreenPlay:spawnSceneObjects()

	

end

function MandaloreScreenPlay:spawnMobiles()

	--Anything dashed out will need to be added here and removed from spawn manager once the spawnMobiles command is extended.

	spawnMobile("mandalore", "at_at",400,6542.2,1.2,-4759.4,52,0)
	spawnMobile("mandalore", "imperial_recruiter",60,6508.0,0.9,-4725.5,-58,0)
	spawnMobile("mandalore", "crackdown_elite_dark_trooper",400,6659.2,0.3,-4813.9,119,0)
	spawnMobile("mandalore", "crackdown_elite_dark_trooper",400,6560.9,0.4,-4809.1,38,0)
	spawnMobile("mandalore", "crackdown_elite_dark_trooper",400,6556.8,0.4,-4812.2,-123,0)
	spawnMobile("mandalore", "crackdown_elite_dark_trooper",400,6511.7,0.7,-4826.0,-179,0)
	spawnMobile("mandalore", "crackdown_elite_dark_trooper",400,6488.7,1.6,-4826.0,-179,0)
	spawnMobile("mandalore", "crackdown_elite_dark_trooper",400,6438.1,2.5,-4810.3,-126,0)
	spawnMobile("mandalore", "crackdown_elite_dark_trooper",400,6435.7,1.1,-4805.4,-24,0)
	spawnMobile("mandalore", "crackdown_elite_dark_trooper",400,6433.4,7.0,-4683.0,-50,0)
	spawnMobile("mandalore", "crackdown_elite_dark_trooper",400,6487.8,6.1,-4675.0,0,0)
	spawnMobile("mandalore", "crackdown_elite_dark_trooper",400,6512.1,5.1,-4675.0,0,0)
	spawnMobile("mandalore", "crackdown_elite_dark_trooper",400,6562.3,0.3,-4684.6,58,0)
	spawnMobile("mandalore", "crackdown_elite_dark_trooper",400,6553.5,1.4,-4683.3,-67,0)
	spawnMobile("mandalore", "crackdown_elite_dark_trooper",400,6555.3,0.9,-4689.4,-147,0)
	spawnMobile("mandalore", "at_st",400,6521.0,3.0,-4700.5,-28,0)
	spawnMobile("mandalore", "at_st",400,6476.7,5.5,-4693.2,35,0)
	spawnMobile("mandalore", "at_st",400,6485.5,0.3,-4797.2,171,0)
	spawnMobile("mandalore", "at_st",400,6501.1,1.1,-4796.4,-166,0)
	spawnMobile("mandalore", "artisan",60,1580.5,4.0,-6385.1,127,0)
	spawnMobile("mandalore", "artisan",60,1641.0,4.0,-6382.5,122,0)
	spawnMobile("mandalore", "artisan",60,1646.7,4.0,-6383.6,-92,0)
	spawnMobile("mandalore", "artisan",60,1628.1,4.0,-6494.9,90,0)
	spawnMobile("mandalore", "artisan",60,1526.0,4.0,-6444.5,113,0)
	spawnMobile("mandalore", "artisan",60,1650.8,4.0,-6408.9,-21,0)
	spawnMobile("mandalore", "artisan",60,1654.5,4.0,-6444.0,-157,0)
	spawnMobile("mandalore", "artisan",60,1634.6,4.0,-6455.1,77,0)
	spawnMobile("mandalore", "artisan",60,1639.7,4.0,-6482.9,45,0)
	spawnMobile("mandalore", "bartender",60,7.7,-0.9,-1.6,126,8565381)
	--spawnMobile("mandalore", "bartender",60,7.4,-0.9,2.8,42,8565743)
	spawnMobile("mandalore", "bartender",60,8.6,-0.9,0.4,90,8566411)
	spawnMobile("mandalore", "bodyguard",300,1566.6,2.0,-6525.0,-134,0)
	spawnMobile("mandalore", "bodyguard",300,1596.4,4.2,-6357.6,-149,0)
	spawnMobile("mandalore", "bodyguard",300,1596.4,4.2,-6357.6,-149,0)
	spawnMobile("mandalore", "bodyguard",300,6331.7,3.0,-6225.8,-127,0)
	spawnMobile("mandalore", "bodyguard",300,6210.3,0.1,-6176.9,14,0)
	spawnMobile("mandalore", "bodyguard",300,6371.6,2.8,-6227.2,-144,0)
	spawnMobile("mandalore", "bodyguard",300,1035.4,20.3,2655.2,-36,0)
	spawnMobile("mandalore", "bodyguard",300,-5.1,-0.9,-4.8,43,8566411)
	spawnMobile("mandalore", "bothan_diplomat",60,1630.0,2.0,-6606.3,124,0)
	spawnMobile("mandalore", "bothan_diplomat",60,1630.0,2.0,-6606.3,124,0)
	spawnMobile("mandalore", "bothan_diplomat",60,6198.6,0.2,-6155.3,-83,0)
	spawnMobile("mandalore", "bothan_diplomat",60,6371.4,0.4,-6267.2,-35,0)
	spawnMobile("mandalore", "bothan_diplomat",60,-6970.1,25.0,5380.8,-63,0)
	spawnMobile("mandalore", "bothan_diplomat",60,4.3,-0.9,20.3,165,8566415)
	spawnMobile("mandalore", "bothan_information_broker",60,1608.9,4.0,-6431.8,117,0)
	spawnMobile("mandalore", "bothan_information_broker",60,16.1,1.3,9.0,-112,8565655)
	spawnMobile("mandalore", "bothan_information_broker",60,6298.5,7.3,-6374.6,74,0)
	spawnMobile("mandalore", "bothan_information_broker",60,1174.4,2.5,2750.2,-92,0)
	spawnMobile("mandalore", "bounty_hunter",60,1669.7,3.0,-6618.1,48,0)
	spawnMobile("mandalore", "bounty_hunter",60,-5612.4,0.2,-5103.0,28,0)
	spawnMobile("mandalore", "bounty_hunter",60,8.7,7.0,-11.3,-56,8566310)
	spawnMobile("mandalore", "brawler",60,1714.6,1.9,-6615.1,-167,0)
	spawnMobile("mandalore", "brawler",60,6176.4,0.7,-6168.1,27,0)
	spawnMobile("mandalore", "businessman",60,1537.9,4.0,-6466.3,114,0)
	spawnMobile("mandalore", "businessman",60,1573.0,5.3,-6326.3,128,0)
	spawnMobile("mandalore", "businessman",60,6111.8,0.5,-6171.5,37,0)
	spawnMobile("mandalore", "businessman",60,0.0,1.1,-11.9,-40,8565702)
	spawnMobile("mandalore", "businessman",60,-8.1,6.1,3.6,118,8566536)
	spawnMobile("mandalore", "comm_operator",300,-12.4,-0.9,-21.2,-43,8565748)
	spawnMobile("mandalore", "commoner",60,1550.5,4.0,-6438.6,-48,0)
	spawnMobile("mandalore", "commoner",60,1640.1,12.3,-6297.8,-167,0)
	spawnMobile("mandalore", "commoner",60,6204.4,6.4,-6375.3,-107,0)
	spawnMobile("mandalore", "commoner",60,-6918.4,25.0,5412.0,-134,0)
	spawnMobile("mandalore", "commoner",60,-6932.4,25.0,5415.7,101,0)
	spawnMobile("mandalore", "commoner",60,1566.8,7.2,-6284.0,146,0)
	spawnMobile("mandalore", "commoner",60,25.8,-0.9,-6.1,-140,8566411)
	spawnMobile("mandalore", "corellia_times_investigator",60,1537.6,4.0,-6414.8,39,0)
	spawnMobile("mandalore", "corellia_times_investigator",60,6256.6,2.5,-6058.0,127,0)
	spawnMobile("mandalore", "commoner",60,-6.3,-0.9,-20.2,-43,8565748)
	spawnMobile("mandalore", "corellia_times_investigator",60,6125.2,0.5,-6373.3,107,0)
	spawnMobile("mandalore", "corellia_times_investigator",60,-6885.6,38.0,5469.3,-29,0)
	spawnMobile("mandalore", "corsec_agent",300,6274.9,11.2,-6125.7,-75,0)
	spawnMobile("mandalore", "commoner",60,6260.4,2.5,-6058.0,-64,0)
	spawnMobile("mandalore", "corsec_detective",300,6248.9,0.3,-6073.2,104,0)
	spawnMobile("mandalore", "corsec_detective",300,4706.7,2.2,7188.4,114,0)
	spawnMobile("mandalore", "entertainer",60,1563.9,4.0,-6362.0,-152,0)
	spawnMobile("mandalore", "entertainer",60,-3.1,-0.9,-14.3,-43,8565748)
	spawnMobile("mandalore", "entertainer",60,-0.4,0.6,-6.7,-29,8566263)
	spawnMobile("mandalore", "entertainer",60,3.5,0.1,3.0,167,8566513)
	spawnMobile("mandalore", "entertainer",60,44.5,0.1,1.7,-139,8566409)
	spawnMobile("mandalore", "explorer",60,1434.1,2.0,-6151.2,128,0)
	--spawnMobile("mandalore", "explorer",60,-0.7,1.0,6.4,-145,8565800)
	spawnMobile("mandalore", "explorer",60,6369.9,1.7,-6141.0,44,0)
	spawnMobile("mandalore", "explorer",60,-5688.5,0.2,-5001.2,-126,0)
	spawnMobile("mandalore", "explorer",60,4651.3,11.0,7094.8,30,0)
	spawnMobile("mandalore", "explorer",60,4794.0,13.1,7186.0,-122,0)
	spawnMobile("mandalore", "explorer",60,1038.3,2.0,2744.8,133,0)
	spawnMobile("mandalore", "farmer",60,-5594.6,2.3,-4977.6,46,0)
	spawnMobile("mandalore", "farmer",60,-5813.8,2.1,-5062.3,-144,0)
	spawnMobile("mandalore", "farmer",60,4665.6,10.6,7128.4,149,0)
	spawnMobile("mandalore", "farmer_rancher",60,-5618.1,1.3,-4997.9,-138,0)
	spawnMobile("mandalore", "farmer_rancher",60,-5612.3,0.2,-5081.8,157,0)
	spawnMobile("mandalore", "farmer_rancher",60,6353.6,0.7,-6000.1,142,0)
	spawnMobile("mandalore", "fringer",300,1583.4,4.2,-6366.9,141,0)
	spawnMobile("mandalore", "fringer",300,-6670.3,30.0,5568.5,63,0)
	spawnMobile("mandalore", "gambler",60,1417.6,2.0,-6146.5,22,0)
	spawnMobile("mandalore", "gambler",60,6404.8,0.2,-6098.3,-2,0)
	spawnMobile("mandalore", "hunter",300,1383.0,2.4,-6163.7,85,0)
	spawnMobile("mandalore", "hunter",300,-6759.7,38.0,5531.4,-130,0)
	spawnMobile("mandalore", "hunter",300,-6659.6,37.0,5517.5,128,0)
	spawnMobile("mandalore", "imperial_warrant_officer_ii",60,1418.2,27.3,-6358.1,105,0)
	spawnMobile("mandalore", "info_broker",60,1538.7,27.3,-6362.2,143,0)
	spawnMobile("mandalore", "info_broker",60,6377.9,0.1,-6000.3,64,0)
	spawnMobile("mandalore", "info_broker",60,-6686.0,30.0,5559.1,-151,0)
	spawnMobile("mandalore", "info_broker",60,2.5,1.0,-18.9,-18,8566307)
	spawnMobile("mandalore", "junk_dealer",0,1652.4,4.0,-6344.6,-137,0)
	spawnMobile("mandalore", "junk_dealer",0,-5695.4,2.0,-5065.0,1,0)
	spawnMobile("mandalore", "junk_dealer",0,-6797.0,38.0,5468.5,-41,0)
	--spawnMobile("mandalore", "medic",60,19.8,0.3,6.1,125,8565413)
	spawnMobile("mandalore", "medic",60,6014.5,0.9,-6427.9,-45,0)
	spawnMobile("mandalore", "medic",60,-5.1,0.1,6.7,-34,8565733)
	spawnMobile("mandalore", "medic",60,-6.3,0.1,-1.6,-174,8566712)
	spawnMobile("mandalore", "medic",60,-1.1,0.2,8.7,124,8566318)
	spawnMobile("mandalore", "mercenary",60,5992.2,0.4,-6276.7,28,0)
	spawnMobile("mandalore", "mercenary",60,-5758.4,0.1,-5000.5,121,0)
	spawnMobile("mandalore", "mercenary",60,1151.4,1.6,2787.0,-136,0)
	spawnMobile("mandalore", "mercenary",60,-6648.1,30.0,5569.9,-52,0)
	spawnMobile("mandalore", "mercenary",60,-6866.4,45.0,5446.7,119,0)
	spawnMobile("mandalore", "mercenary",60,-7005.3,25.0,5458.2,52,0)
	spawnMobile("mandalore", "mercenary",60,-2.3,2.0,3.7,9,8566302)
	spawnMobile("mandalore", "miner",60,6003.8,0.1,-6246.8,119,0)
	spawnMobile("mandalore", "miner",60,1153.7,2.5,2767.6,-31,0)
	spawnMobile("mandalore", "noble",60,1527.2,11.3,-6354.9,137,0)
	spawnMobile("mandalore", "noble",60,-4.8,1.1,-1.7,36,8566536)
	spawnMobile("mandalore", "noble",60,18.9,-0.9,-19.7,15,8566412)
	spawnMobile("mandalore", "pilot",60,19.9,1.0,-0.5,-126,8566305)
	spawnMobile("mandalore", "r2",60,1546.0,27.3,-6361.8,-139,0)
	spawnMobile("mandalore", "r2",60,6001.4,3.6,-6167.5,-49,0)
	spawnMobile("mandalore", "r2",60,6401.4,0.2,-6094.5,67,0)
	spawnMobile("mandalore", "r3",60,-6653.1,30.0,5596.1,136,0)
	spawnMobile("mandalore", "r3",60,-6992.5,27.5,5445.2,37,0)
	spawnMobile("mandalore", "r5",60,1731.6,2.3,-6288.5,27,0)
	spawnMobile("mandalore", "scientist",60,1618.4,27.3,-6358.0,44,0)
	spawnMobile("mandalore", "scientist",60,1069.1,25.8,2807.6,134,0)
	spawnMobile("mandalore", "slicer",60,1641.3,27.3,-6362.2,-146,0)
	spawnMobile("mandalore", "slicer",60,6143.0,1.5,-6040.6,164,0)
	spawnMobile("mandalore", "slicer",60,-6697.4,30.0,5589.3,-60,0)
	spawnMobile("mandalore", "slicer",60,-6925.7,38.0,5467.4,123,0)
	spawnMobile("mandalore", "mythosaur",450,1818.4,2.0,-1166.6,-80,0)
	spawnMobile("mandalore", "mythosaur",450,1825.7,15.1,-1083.1,-152,0)
	spawnMobile("mandalore", "mythosaur",450,1741.9,3.0,-1136.6,173,0)
	spawnMobile("mandalore", "mythosaur",450,1731.5,2.5,-1241.6,61,0)
	spawnMobile("mandalore", "mythosaur",450,1781.7,8.6,-1256.5,-12,0)
	spawnMobile("mandalore", "mythosaur",450,1838,11,-1236,15,0)
  spawnMobile("mandalore", "mythosaur",450,1857,12,-1124,45,0)
  spawnMobile("mandalore", "mythosaur",450,1772,0,-1190,75,0)
	spawnMobile("mandalore", "mytho_king",10800,1915,2,-1218,75,0)
	spawnMobile("mandalore", "bralor_clan_mercenary",120,18.1,1.0,21.0,177,8566303)
	spawnMobile("mandalore", "bralor_clan_mercenary",120,17.1,1.0,-3.1,34,8566305)
	spawnMobile("mandalore", "bralor_clan_mercenary",120,15.4,1.0,-21.3,-24,8566306)
	spawnMobile("mandalore", "bralor_clan_mercenary",120,-13.6,1.0,-21.4,-81,8566308)
	spawnMobile("mandalore", "bralor_clan_mercenary",120,-15.8,1.0,-21.7,59,8566308)
	spawnMobile("mandalore", "bralor_clan_mercenary",120,-4.1,1.0,-6.4,33,8566302)
	spawnMobile("mandalore", "bralor_clan_mercenary",120,-3.1,7.0,-11.5,35,8566310)
	spawnMobile("mandalore", "bralor_clan_mercenary",120,-11.0,7.0,6.8,-174,8566311)
	spawnMobile("mandalore", "bralor_clan_mercenary",120,-0.1,7.0,12.5,-3,8566311)
	spawnMobile("mandalore", "bralor_clan_mercenary",120,6.3,7.0,9.8,59,8566312)
	spawnMobile("mandalore", "dexton_clan_hunter",120,20.6,-0.9,19.3,-146,8566413)
	spawnMobile("mandalore", "dexton_clan_hunter",120,13.0,1.1,4.7,-162,8566431)
	spawnMobile("mandalore", "dexton_clan_hunter",120,-6686.4,30.0,5556.6,-24,0)
	spawnMobile("mandalore", "dexton_clan_hunter",120,-7.6,0.6,-4.8,64,8566263)
	spawnMobile("mandalore", "dexton_clan_hunter",120,-0.5,0.7,-1.4,110,8566255)
	spawnMobile("mandalore", "dexton_clan_hunter",120,5.2,0.7,-2.2,-172,8566260)
	spawnMobile("mandalore", "dexton_clan_hunter",120,-5773.6,2.3,-5051.8,57,0)
	spawnMobile("mandalore", "dexton_clan_hunter",120,-5610.9,0.2,-5102.0,-114,0)
	spawnMobile("mandalore", "dexton_clan_hunter",120,9.4,-0.9,-3.5,-37,8565381)
	spawnMobile("mandalore", "dexton_clan_hunter",120,1.8,-0.9,20.2,146,8565385)
	spawnMobile("mandalore", "carid_clan_explorer",120,-4.5,0.1,-4.0,121,8566515)
	spawnMobile("mandalore", "carid_clan_explorer",120,-0.4,1.1,2.4,127,8566543)
	spawnMobile("mandalore", "carid_clan_explorer",120,4821.7,15.8,7167.7,-71,0)
	spawnMobile("mandalore", "carid_clan_explorer",120,4806.1,12.0,7127.9,-84,0)
	spawnMobile("mandalore", "carid_clan_explorer",120,4735.2,2.0,7114.2,15,0)
	spawnMobile("mandalore", "carid_clan_explorer",120,4670.1,9.9,7126.4,-142,0)
	spawnMobile("mandalore", "carid_clan_explorer",120,1076.4,25.8,2799.5,-57,0)
	spawnMobile("mandalore", "carid_clan_explorer",120,1145.5,2.0,2786.3,104,0)
	spawnMobile("mandalore", "carid_clan_explorer",120,1135.1,4.5,2710.3,-63,0)
	spawnMobile("mandalore", "carid_clan_explorer",120,1113.7,2.5,2680.7,-42,0)

	

	
		
	
end
RoriRestussScreenPlay = ScreenPlay:new {
	numberOfActs = 1,

	screenplayName = "RoriRestussScreenPlay"
}

registerScreenPlay("RoriRestussScreenPlay",  true)

function RoriRestussScreenPlay:start()
	if (isZoneEnabled("rori")) then
		self:spawnMobiles()
    		self:spawnSceneObjects()
	end
end

function RoriRestussScreenPlay:spawnSceneObjects()

end

function RoriRestussScreenPlay:spawnMobiles()

spawnMobile("rori", "the_hand", 1800, 5274.56, 80, 5742.2, 4, 0)
spawnMobile("rori", "general_hark", 1800, 5502.42, 80, 5652.51, 320, 0)

end

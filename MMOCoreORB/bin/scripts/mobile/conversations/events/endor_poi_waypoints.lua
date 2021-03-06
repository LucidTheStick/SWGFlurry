
endor_poi_waypoints_template = ConvoTemplate:new {
   initialScreen = "first_screen",
   templateType = "Lua",
   luaClassHandler = "endor_poi_waypoints_convo_handler",
   screens = {}
}


endor_poi_waypoints_items_screen = ConvoScreen:new {
   id = "items_screen",
   leftDialog = "",
   customDialogText = "Please select a POI to visit.",
   stopConversation = "false",
   options = {
      {"Badge:Dulok Villlage", "1"},
      {"Badge:Ewok Tree Villlage", "2"},
      {"Badge:Imp Outpost", "3"},
      {"Badge:Lake Villlage", "4"},
      }
}
endor_poi_waypoints_template:addScreen(endor_poi_waypoints_items_screen);
endor_poi_waypoints_first_screen = ConvoScreen:new {
   id = "first_screen",
   leftDialog = "",
   customDialogText = "Welcome to the Points Of Intrest Service.",
   stopConversation = "false",
   options = {
      {"endor Points Of Intrest", "items_screen"},
      }
}
endor_poi_waypoints_template:addScreen(endor_poi_waypoints_first_screen);
endor_poi_waypoints_end_quest = ConvoScreen:new {
   id = "end",
   leftDialog = "",
   customDialogText = "Thank you Hero for using the points of intrest Service!",
   stopConversation = "true",
   options = {   
   }
}
endor_poi_waypoints_template:addScreen(endor_poi_waypoints_end_quest);
endor_poi_waypoints_deny_quest = ConvoScreen:new {
   id = "deny_quest",
   leftDialog = "",
   customDialogText = "try again!.",
   stopConversation = "true",
   options = {   
   }
}
endor_poi_waypoints_template:addScreen(endor_poi_waypoints_deny_quest);
endor_poi_waypoints_insufficient_funds = ConvoScreen:new {
   id = "insufficient_funds",
   leftDialog = "",
   customDialogText = "try again!.",
   stopConversation = "true",
   options = {   
   }
}
endor_poi_waypoints_template:addScreen(endor_poi_waypoints_insufficient_funds);
endor_poi_waypoints_insufficient_space = ConvoScreen:new {
   id = "insufficient_space",
   leftDialog = "",
   customDialogText = "Sorry, but you don't have enough space in your inventory to accept the item. Please make some space and try again.",
   stopConversation = "true",
   options = {   
   }
}
endor_poi_waypoints_template:addScreen(endor_poi_waypoints_insufficient_space);
endor_poi_waypoints_insufficient_item = ConvoScreen:new {
   id = "insufficient_item",
   leftDialog = "",
   customDialogText = "try again!.",
   stopConversation = "true",
   options = {   
   }
}
endor_poi_waypoints_template:addScreen(endor_poi_waypoints_insufficient_item);
addConversationTemplate("endor_poi_waypoints_template", endor_poi_waypoints_template);

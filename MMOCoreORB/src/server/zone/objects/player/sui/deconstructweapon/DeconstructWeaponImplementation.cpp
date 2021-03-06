#include "server/zone/objects/player/sui/deconstructweapon/DeconstructWeapon.h"
#include "server/zone/packets/ui/SuiCreatePageMessage.h"

BaseMessage* DeconstructWeaponImplementation::generateMessage() {
	SuiCreatePageMessage* message = new SuiCreatePageMessage(boxID, "Script.messageBox");

	//Declare Headers:
	addHeader("Prompt.lblPrompt", "Text");
	addHeader("bg.caption.lblTitle", "Text");

	//Set Body Options:
	addSetting("3", "Prompt.lblPrompt", "Text", promptText);
	addSetting("3", "bg.caption.lblTitle", "Text", promptTitle);

	if (cancelButton) {
		addSetting("3", "btnCancel", "Enabled", "True");
		addSetting("3", "btnCancel", "Visible", "True");

		if (cancelButtonText.indexOf("@") == 0)
			addSetting("3", "btnCancel", "Text", cancelButtonText);
	} else {
		addSetting("3", "btnCancel", "Enabled", "False");
		addSetting("3", "btnCancel", "Visible", "False");
	}

	if (okButtonText.indexOf("@") == 0)
		addSetting("3", "btnOk", "Text", okButtonText);

	if (otherButton) {
		addSetting("3", "btnRevert","Enabled","True");
		addSetting("3", "btnRevert","Visible","True");

		if (otherButtonText.indexOf("@") == 0)
			addSetting("3", "btnRevert","Text", otherButtonText);
	} else {
		addSetting("3", "btnRevert", "Enabled", "False");
		addSetting("3", "btnRevert", "Visible", "False");
	}

	setHandlerText("handleSUI");

	//Generate Packet:
	generateHeader(message);
	generateBody(message);
	//generateFooter(message, 1);
	generateFooter(message);
	hasGenerated = true;

	return message;
}

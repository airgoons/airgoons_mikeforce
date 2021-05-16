class ParaWelcomeScreen {
    version = QUOT(VN_MF_VERSION);

    class Welcome {
        title = "Welcome to Mike Force";
        /*content = "Structured Text Content";*/
		content[] = {
			"<t align='center' size='1.5'>Welcome to the Mike Force beta!</t>",
			"<br/><br/>",
			"<t align='center'>",
			"This mission is still under heavy development, so please keep an eye on the <a href='https://steamcommunity.com/sharedfiles/filedetails/?id=2477873447'>Steam Workshop</a> page for updates!",
			"<br/><br/>",
			"If you're new to the gamemode, you can find guidance in the field manual (Esc -> Field Manual), with a full tutorial coming soon",
			"<br/><br/>",
			"You can report issues on <a href='https://github.com/Savage-Game-Design/Mike-Force'>Github</a>, which is linked from the workshop.",
			"<br/><br/>",
			"That's all for now!",
			"<br/><br/>",
			"Have fun, and good luck. You'll need it.",
			"</t>"
		};
    };

    class Changelog {
        title = "Mike Force - Changelog";
        content[] = {
			"<t align='center' size='1.5' font='RobotoCondensedBold'>Changelog</t>",
			"<br/><br/>",
			"<t align='center' size='1.2'>7th May 2021 - v0.65.03</t><br/>",
			"<t align='center' font='RobotoCondensedLight'>Added 3 headless client slots</t><br/>",
			"<t align='center' font='RobotoCondensedLight'>Scaled up the task roster</t><br/>",
			"<t align='center' font='RobotoCondensedLight'>Added parameter to change the AI limit</t><br/>",
			"<br/>",
			"<t align='center' size='1.2'>7th May 2021 - v0.65.02</t><br/>",
			"<t align='center' font='RobotoCondensedLight'>Reduced the mission to 32 slots (the number the mission is designed for)</t><br/>",
			"<br/>",
			"<t align='center' size='1.2'>6th May 2021 - v0.65.00</t><br/>",
			"<t align='center' font='RobotoCondensedLight'>Initial Beta Release</t>"
		};
    };
};
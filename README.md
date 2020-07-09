# mtga-fix

This project is a patch for the foreign language crashes happening in MTG Arena.

The issue is related to translated names, probably with accents, that are passed to the sound engine.

To fix it, I simply reroute the function call to another function without names, using a proxy Dll.

# how to install ?

Rename the original "AkSoundEngine.dll" to "AkSoundEngine.dll_". This name is important, don't use another.

Replace it with the proxy "AkSoundEngine.dll".

That's it.

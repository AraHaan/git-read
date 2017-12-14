# git-read
git plugin for adding the 'git read' command.

# Instalation

On Windows:

Open up ``git-read.sln`` and hit compile. After a few seconds you should have ``git-read.exe`` drop this in ``E:\Program Files\Git\mingw64\bin`` depending on what version of git being used.

My system is 64 bit but I am getting away with having only an 32 bit version of ``git-read.exe``.

On Posix based systems:

Use ``gcc`` or ``clang`` honestly I don't care which compiler is used. However any
makefiles for ``make install`` or ``cmake`` is apreciated. After all ``make install`` makes it then easier
to put it in the very same directory that ``git`` is in so it loads the plugin to begin with. :wink:

That should just about be it on instalation as it should not be too difficult.

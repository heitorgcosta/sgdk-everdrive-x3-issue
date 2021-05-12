# SGDK 1.62 issue with Everdrive X3

Bulding this project with SGDK 1.62 will lead to a rom that will not boot at all on an Everdrive X3 (will get stuck on "loading").
Bulding this with SGDK 1.60, however, will work perfectly fine.

Deleting one of the bitmap resources (using 3 images instead of 4) will result in a rom with less than 2MB and Everdrive X3 will boot the rom, regardless of which SGDK version was used.

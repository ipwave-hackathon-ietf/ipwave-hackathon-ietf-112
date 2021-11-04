# ipwave-hackathon-ietf-ipwave-hackathon-ietf-112

Requirements:
============

*    OS: Ubuntu 16.04
*    SUMO version 1.0.0
*    GNU GCC 7.3
*    OMNeTPP 5.3
*    Veins, INET and SIMULTE, use versions in this repository.

Configurations:
==============

* Import inet ant into the OMNeTPP  works space (File --> Import --> General --> Existing Projects into Workspace)
* Import veins, Specifically, check the box for sear for nested project, and install both veins and the veins_inet3 project.
* Now Right click simulte --> properties --> Project References amd make sure to tick inet, veins and veins_inet3

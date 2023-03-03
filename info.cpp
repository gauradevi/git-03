Beginning with Jenkins 2.335 and Jenkins 2.332.1, the package is configured with systemd rather than the older System V init. See the DigitalOcean community systemd tutorial to better understand the benefits of systemd and the systemctl command.


The package installation will:

    Setup Jenkins as a daemon launched on start. Run systemctl cat jenkins for more details.

    Create a ‘jenkins’ user to run this service.


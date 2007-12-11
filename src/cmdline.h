/** @file cmdline.h
 *  @brief The header file for the command line option parser
 *  generated by GNU Gengetopt version 2.21
 *  http://www.gnu.org/software/gengetopt.
 *  DO NOT modify this file, since it can be overwritten
 *  @author GNU Gengetopt by Lorenzo Bettini */

#ifndef CMDLINE_H
#define CMDLINE_H

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef CMDLINE_PARSER_PACKAGE
/** @brief the program name */
#define CMDLINE_PARSER_PACKAGE PACKAGE
#endif

#ifndef CMDLINE_PARSER_VERSION
/** @brief the program version */
#define CMDLINE_PARSER_VERSION VERSION
#endif

/** @brief Where the command line options are stored */
struct gengetopt_args_info
{
  const char *help_help; /**< @brief Print help and exit help description.  */
  const char *version_help; /**< @brief Print version and exit help description.  */
  int fg_flag;	/**< @brief Run in foreground (default=off).  */
  const char *fg_help; /**< @brief Run in foreground help description.  */
  int debug_flag;	/**< @brief Run in debug mode (default=off).  */
  const char *debug_help; /**< @brief Run in debug mode help description.  */
  int debugfacility_arg;	/**< @brief Which modules to print debug messages for (default='1').  */
  char * debugfacility_orig;	/**< @brief Which modules to print debug messages for original value given at command line.  */
  const char *debugfacility_help; /**< @brief Which modules to print debug messages for help description.  */
  int logfacility_arg;	/**< @brief Syslog facility to be used for logging (default='-1').  */
  char * logfacility_orig;	/**< @brief Syslog facility to be used for logging original value given at command line.  */
  const char *logfacility_help; /**< @brief Syslog facility to be used for logging help description.  */
  char * conf_arg;	/**< @brief Read configuration file.  */
  char * conf_orig;	/**< @brief Read configuration file original value given at command line.  */
  const char *conf_help; /**< @brief Read configuration file help description.  */
  int interval_arg;	/**< @brief Re-read configuration file at this interval (default='3600').  */
  char * interval_orig;	/**< @brief Re-read configuration file at this interval original value given at command line.  */
  const char *interval_help; /**< @brief Re-read configuration file at this interval help description.  */
  char * pidfile_arg;	/**< @brief Filename of process id file.  */
  char * pidfile_orig;	/**< @brief Filename of process id file original value given at command line.  */
  const char *pidfile_help; /**< @brief Filename of process id file help description.  */
  char * statedir_arg;	/**< @brief Directory of nonvolatile data.  */
  char * statedir_orig;	/**< @brief Directory of nonvolatile data original value given at command line.  */
  const char *statedir_help; /**< @brief Directory of nonvolatile data help description.  */
  char * net_arg;	/**< @brief Network (default='192.168.182.0/24').  */
  char * net_orig;	/**< @brief Network original value given at command line.  */
  const char *net_help; /**< @brief Network help description.  */
  int dhcpstart_arg;	/**< @brief Network DHCP Starting IP (default='0').  */
  char * dhcpstart_orig;	/**< @brief Network DHCP Starting IP original value given at command line.  */
  const char *dhcpstart_help; /**< @brief Network DHCP Starting IP help description.  */
  int dhcpend_arg;	/**< @brief Network DHCP Ending IP (default='0').  */
  char * dhcpend_orig;	/**< @brief Network DHCP Ending IP original value given at command line.  */
  const char *dhcpend_help; /**< @brief Network DHCP Ending IP help description.  */
  char * dynip_arg;	/**< @brief Dynamic IP address pool.  */
  char * dynip_orig;	/**< @brief Dynamic IP address pool original value given at command line.  */
  const char *dynip_help; /**< @brief Dynamic IP address pool help description.  */
  int nodynip_flag;	/**< @brief No Dynamic IP assignment (default=off).  */
  const char *nodynip_help; /**< @brief No Dynamic IP assignment help description.  */
  char * statip_arg;	/**< @brief Static IP address pool.  */
  char * statip_orig;	/**< @brief Static IP address pool original value given at command line.  */
  const char *statip_help; /**< @brief Static IP address pool help description.  */
  char * dns1_arg;	/**< @brief Primary DNS server IP address.  */
  char * dns1_orig;	/**< @brief Primary DNS server IP address original value given at command line.  */
  const char *dns1_help; /**< @brief Primary DNS server IP address help description.  */
  char * dns2_arg;	/**< @brief Secondary DNS server IP address.  */
  char * dns2_orig;	/**< @brief Secondary DNS server IP address original value given at command line.  */
  const char *dns2_help; /**< @brief Secondary DNS server IP address help description.  */
  char * domain_arg;	/**< @brief Domain to use for DNS lookups (default='coova.org').  */
  char * domain_orig;	/**< @brief Domain to use for DNS lookups original value given at command line.  */
  const char *domain_help; /**< @brief Domain to use for DNS lookups help description.  */
  char * ipup_arg;	/**< @brief Script to run after link-up.  */
  char * ipup_orig;	/**< @brief Script to run after link-up original value given at command line.  */
  const char *ipup_help; /**< @brief Script to run after link-up help description.  */
  char * ipdown_arg;	/**< @brief Script to run after link-down.  */
  char * ipdown_orig;	/**< @brief Script to run after link-down original value given at command line.  */
  const char *ipdown_help; /**< @brief Script to run after link-down help description.  */
  char * conup_arg;	/**< @brief Script to run after user logon.  */
  char * conup_orig;	/**< @brief Script to run after user logon original value given at command line.  */
  const char *conup_help; /**< @brief Script to run after user logon help description.  */
  char * condown_arg;	/**< @brief Script to run after user logoff.  */
  char * condown_orig;	/**< @brief Script to run after user logoff original value given at command line.  */
  const char *condown_help; /**< @brief Script to run after user logoff help description.  */
  int txqlen_arg;	/**< @brief TX Queue length for tun interface (linux only) (default='100').  */
  char * txqlen_orig;	/**< @brief TX Queue length for tun interface (linux only) original value given at command line.  */
  const char *txqlen_help; /**< @brief TX Queue length for tun interface (linux only) help description.  */
  char * tundev_arg;	/**< @brief TUN/TAP Device, as in tun0 or tap1.  */
  char * tundev_orig;	/**< @brief TUN/TAP Device, as in tun0 or tap1 original value given at command line.  */
  const char *tundev_help; /**< @brief TUN/TAP Device, as in tun0 or tap1 help description.  */
  char * radiuslisten_arg;	/**< @brief IP address to send from.  */
  char * radiuslisten_orig;	/**< @brief IP address to send from original value given at command line.  */
  const char *radiuslisten_help; /**< @brief IP address to send from help description.  */
  char * radiusserver1_arg;	/**< @brief IP address of radius server 1 (default='rad01.coova.org').  */
  char * radiusserver1_orig;	/**< @brief IP address of radius server 1 original value given at command line.  */
  const char *radiusserver1_help; /**< @brief IP address of radius server 1 help description.  */
  char * radiusserver2_arg;	/**< @brief IP address of radius server 2 (default='rad01.coova.org').  */
  char * radiusserver2_orig;	/**< @brief IP address of radius server 2 original value given at command line.  */
  const char *radiusserver2_help; /**< @brief IP address of radius server 2 help description.  */
  int radiusauthport_arg;	/**< @brief Authentication UDP port of radius server (default='1812').  */
  char * radiusauthport_orig;	/**< @brief Authentication UDP port of radius server original value given at command line.  */
  const char *radiusauthport_help; /**< @brief Authentication UDP port of radius server help description.  */
  int radiusacctport_arg;	/**< @brief Accounting UDP port of radius server (default='1813').  */
  char * radiusacctport_orig;	/**< @brief Accounting UDP port of radius server original value given at command line.  */
  const char *radiusacctport_help; /**< @brief Accounting UDP port of radius server help description.  */
  char * radiussecret_arg;	/**< @brief Radius shared secret (default='coova-anonymous').  */
  char * radiussecret_orig;	/**< @brief Radius shared secret original value given at command line.  */
  const char *radiussecret_help; /**< @brief Radius shared secret help description.  */
  int radiustimeout_arg;	/**< @brief Retry timeout in milli seconds (default='5000').  */
  char * radiustimeout_orig;	/**< @brief Retry timeout in milli seconds original value given at command line.  */
  const char *radiustimeout_help; /**< @brief Retry timeout in milli seconds help description.  */
  int radiusretry_arg;	/**< @brief Total number of retries (default='6').  */
  char * radiusretry_orig;	/**< @brief Total number of retries original value given at command line.  */
  const char *radiusretry_help; /**< @brief Total number of retries help description.  */
  int radiusretrysec_arg;	/**< @brief Number of retries before using secondary (default='3').  */
  char * radiusretrysec_orig;	/**< @brief Number of retries before using secondary original value given at command line.  */
  const char *radiusretrysec_help; /**< @brief Number of retries before using secondary help description.  */
  char * radiusnasid_arg;	/**< @brief Radius NAS-Identifier (default='nas01').  */
  char * radiusnasid_orig;	/**< @brief Radius NAS-Identifier original value given at command line.  */
  const char *radiusnasid_help; /**< @brief Radius NAS-Identifier help description.  */
  char * radiuslocationid_arg;	/**< @brief WISPr Location ID.  */
  char * radiuslocationid_orig;	/**< @brief WISPr Location ID original value given at command line.  */
  const char *radiuslocationid_help; /**< @brief WISPr Location ID help description.  */
  char * radiuslocationname_arg;	/**< @brief WISPr Location Name.  */
  char * radiuslocationname_orig;	/**< @brief WISPr Location Name original value given at command line.  */
  const char *radiuslocationname_help; /**< @brief WISPr Location Name help description.  */
  char * locationname_arg;	/**< @brief Location Name.  */
  char * locationname_orig;	/**< @brief Location Name original value given at command line.  */
  const char *locationname_help; /**< @brief Location Name help description.  */
  int radiusnasporttype_arg;	/**< @brief Radius NAS-Port-Type (default='19').  */
  char * radiusnasporttype_orig;	/**< @brief Radius NAS-Port-Type original value given at command line.  */
  const char *radiusnasporttype_help; /**< @brief Radius NAS-Port-Type help description.  */
  int coaport_arg;	/**< @brief Radius disconnect port to listen to (default='0').  */
  char * coaport_orig;	/**< @brief Radius disconnect port to listen to original value given at command line.  */
  const char *coaport_help; /**< @brief Radius disconnect port to listen to help description.  */
  int coanoipcheck_flag;	/**< @brief Allow radius disconnect from any IP (default=off).  */
  const char *coanoipcheck_help; /**< @brief Allow radius disconnect from any IP help description.  */
  char * proxylisten_arg;	/**< @brief IP address to listen to.  */
  char * proxylisten_orig;	/**< @brief IP address to listen to original value given at command line.  */
  const char *proxylisten_help; /**< @brief IP address to listen to help description.  */
  int proxyport_arg;	/**< @brief UDP port to listen to (default='0').  */
  char * proxyport_orig;	/**< @brief UDP port to listen to original value given at command line.  */
  const char *proxyport_help; /**< @brief UDP port to listen to help description.  */
  char * proxyclient_arg;	/**< @brief IP address of proxy client(s).  */
  char * proxyclient_orig;	/**< @brief IP address of proxy client(s) original value given at command line.  */
  const char *proxyclient_help; /**< @brief IP address of proxy client(s) help description.  */
  char * proxysecret_arg;	/**< @brief Radius proxy shared secret.  */
  char * proxysecret_orig;	/**< @brief Radius proxy shared secret original value given at command line.  */
  const char *proxysecret_help; /**< @brief Radius proxy shared secret help description.  */
  char * dhcpif_arg;	/**< @brief Local Ethernet interface.  */
  char * dhcpif_orig;	/**< @brief Local Ethernet interface original value given at command line.  */
  const char *dhcpif_help; /**< @brief Local Ethernet interface help description.  */
  char * dhcpmac_arg;	/**< @brief Interface MAC address.  */
  char * dhcpmac_orig;	/**< @brief Interface MAC address original value given at command line.  */
  const char *dhcpmac_help; /**< @brief Interface MAC address help description.  */
  int lease_arg;	/**< @brief Lease time to allocate to clients (default='600').  */
  char * lease_orig;	/**< @brief Lease time to allocate to clients original value given at command line.  */
  const char *lease_help; /**< @brief Lease time to allocate to clients help description.  */
  int eapolenable_flag;	/**< @brief Enable IEEE 802.1x authentication (default=off).  */
  const char *eapolenable_help; /**< @brief Enable IEEE 802.1x authentication help description.  */
  char * uamserver_arg;	/**< @brief URL of authentication web server.  */
  char * uamserver_orig;	/**< @brief URL of authentication web server original value given at command line.  */
  const char *uamserver_help; /**< @brief URL of authentication web server help description.  */
  char * uamhomepage_arg;	/**< @brief URL of homepage to redirect unauthenticated users to.  */
  char * uamhomepage_orig;	/**< @brief URL of homepage to redirect unauthenticated users to original value given at command line.  */
  const char *uamhomepage_help; /**< @brief URL of homepage to redirect unauthenticated users to help description.  */
  char * uamsecret_arg;	/**< @brief Shared secret between uamserver and chilli.  */
  char * uamsecret_orig;	/**< @brief Shared secret between uamserver and chilli original value given at command line.  */
  const char *uamsecret_help; /**< @brief Shared secret between uamserver and chilli help description.  */
  char * uamlisten_arg;	/**< @brief IP address to listen to for authentication requests.  */
  char * uamlisten_orig;	/**< @brief IP address to listen to for authentication requests original value given at command line.  */
  const char *uamlisten_help; /**< @brief IP address to listen to for authentication requests help description.  */
  int uamport_arg;	/**< @brief TCP port to bind to for authentication requests (default='3990').  */
  char * uamport_orig;	/**< @brief TCP port to bind to for authentication requests original value given at command line.  */
  const char *uamport_help; /**< @brief TCP port to bind to for authentication requests help description.  */
  int uamuiport_arg;	/**< @brief TCP port to bind to for UAM UI requests (default='3991').  */
  char * uamuiport_orig;	/**< @brief TCP port to bind to for UAM UI requests original value given at command line.  */
  const char *uamuiport_help; /**< @brief TCP port to bind to for UAM UI requests help description.  */
  char ** uamallowed_arg;	/**< @brief Domain names exempt from access check .  */
  char ** uamallowed_orig;	/**< @brief Domain names exempt from access check  original value given at command line.  */
  int uamallowed_min; /**< @brief Domain names exempt from access check 's minimum occurreces */
  int uamallowed_max; /**< @brief Domain names exempt from access check 's maximum occurreces */
  const char *uamallowed_help; /**< @brief Domain names exempt from access check  help description.  */
  char ** uamdomain_arg;	/**< @brief Domain name allowed (active dns filtering; one per line!) .  */
  char ** uamdomain_orig;	/**< @brief Domain name allowed (active dns filtering; one per line!)  original value given at command line.  */
  int uamdomain_min; /**< @brief Domain name allowed (active dns filtering; one per line!) 's minimum occurreces */
  int uamdomain_max; /**< @brief Domain name allowed (active dns filtering; one per line!) 's maximum occurreces */
  const char *uamdomain_help; /**< @brief Domain name allowed (active dns filtering; one per line!)  help description.  */
  int uamanydns_flag;	/**< @brief Allow client to use any DNS server (default=off).  */
  const char *uamanydns_help; /**< @brief Allow client to use any DNS server help description.  */
  int uamanyip_flag;	/**< @brief Allow client to use any IP Address (default=off).  */
  const char *uamanyip_help; /**< @brief Allow client to use any IP Address help description.  */
  char * wisprlogin_arg;	/**< @brief A specific WISPr login url to be used.  */
  char * wisprlogin_orig;	/**< @brief A specific WISPr login url to be used original value given at command line.  */
  const char *wisprlogin_help; /**< @brief A specific WISPr login url to be used help description.  */
  int nouamsuccess_flag;	/**< @brief Do not return to the UAM server on success, original url instead (default=off).  */
  const char *nouamsuccess_help; /**< @brief Do not return to the UAM server on success, original url instead help description.  */
  int nouamwispr_flag;	/**< @brief Do not send WISPr XML from ChilliSpot, assume back-end does (default=off).  */
  const char *nouamwispr_help; /**< @brief Do not send WISPr XML from ChilliSpot, assume back-end does help description.  */
  char * uamlogoutip_arg;	/**< @brief HTTP Auto-Logout IP Address (default='1.1.1.1').  */
  char * uamlogoutip_orig;	/**< @brief HTTP Auto-Logout IP Address original value given at command line.  */
  const char *uamlogoutip_help; /**< @brief HTTP Auto-Logout IP Address help description.  */
  long defsessiontimeout_arg;	/**< @brief Default session-timeout if not returned by RADIUS (default='0').  */
  char * defsessiontimeout_orig;	/**< @brief Default session-timeout if not returned by RADIUS original value given at command line.  */
  const char *defsessiontimeout_help; /**< @brief Default session-timeout if not returned by RADIUS help description.  */
  int defidletimeout_arg;	/**< @brief Default idle-timeout if not returned by RADIUS (default='0').  */
  char * defidletimeout_orig;	/**< @brief Default idle-timeout if not returned by RADIUS original value given at command line.  */
  const char *defidletimeout_help; /**< @brief Default idle-timeout if not returned by RADIUS help description.  */
  int definteriminterval_arg;	/**< @brief Default interim-interval for accounting if not returned by RADIUS (default='300').  */
  char * definteriminterval_orig;	/**< @brief Default interim-interval for accounting if not returned by RADIUS original value given at command line.  */
  const char *definteriminterval_help; /**< @brief Default interim-interval for accounting if not returned by RADIUS help description.  */
  int macauth_flag;	/**< @brief Authenticate based on MAC address (default=off).  */
  const char *macauth_help; /**< @brief Authenticate based on MAC address help description.  */
  char ** macallowed_arg;	/**< @brief List of allowed MAC addresses.  */
  char ** macallowed_orig;	/**< @brief List of allowed MAC addresses original value given at command line.  */
  int macallowed_min; /**< @brief List of allowed MAC addresses's minimum occurreces */
  int macallowed_max; /**< @brief List of allowed MAC addresses's maximum occurreces */
  const char *macallowed_help; /**< @brief List of allowed MAC addresses help description.  */
  char * macsuffix_arg;	/**< @brief Suffix to add to the MAC address.  */
  char * macsuffix_orig;	/**< @brief Suffix to add to the MAC address original value given at command line.  */
  const char *macsuffix_help; /**< @brief Suffix to add to the MAC address help description.  */
  char * macpasswd_arg;	/**< @brief Password used when performing MAC authentication.  */
  char * macpasswd_orig;	/**< @brief Password used when performing MAC authentication original value given at command line.  */
  const char *macpasswd_help; /**< @brief Password used when performing MAC authentication help description.  */
  int macallowlocal_flag;	/**< @brief Do not use RADIUS for authenticating the macallowed (default=off).  */
  const char *macallowlocal_help; /**< @brief Do not use RADIUS for authenticating the macallowed help description.  */
  char * wwwdir_arg;	/**< @brief Local content served by chilli (for splash page, etc).  */
  char * wwwdir_orig;	/**< @brief Local content served by chilli (for splash page, etc) original value given at command line.  */
  const char *wwwdir_help; /**< @brief Local content served by chilli (for splash page, etc) help description.  */
  char * wwwbin_arg;	/**< @brief Script binary (such as haserl) for simple web programming.  */
  char * wwwbin_orig;	/**< @brief Script binary (such as haserl) for simple web programming original value given at command line.  */
  const char *wwwbin_help; /**< @brief Script binary (such as haserl) for simple web programming help description.  */
  char * uamui_arg;	/**< @brief Program in inetd style to handle all uam requests.  */
  char * uamui_orig;	/**< @brief Program in inetd style to handle all uam requests original value given at command line.  */
  const char *uamui_help; /**< @brief Program in inetd style to handle all uam requests help description.  */
  char * adminuser_arg;	/**< @brief RADIUS administrative user login username (default='chillispot').  */
  char * adminuser_orig;	/**< @brief RADIUS administrative user login username original value given at command line.  */
  const char *adminuser_help; /**< @brief RADIUS administrative user login username help description.  */
  char * adminpasswd_arg;	/**< @brief RADIUS administrative user login password (default='chillispot').  */
  char * adminpasswd_orig;	/**< @brief RADIUS administrative user login password original value given at command line.  */
  const char *adminpasswd_help; /**< @brief RADIUS administrative user login password help description.  */
  char * nasmac_arg;	/**< @brief Unique MAC address of the NAS (called-station-id).  */
  char * nasmac_orig;	/**< @brief Unique MAC address of the NAS (called-station-id) original value given at command line.  */
  const char *nasmac_help; /**< @brief Unique MAC address of the NAS (called-station-id) help description.  */
  char * nasip_arg;	/**< @brief Unique IP address of the NAS (nas-ip-address).  */
  char * nasip_orig;	/**< @brief Unique IP address of the NAS (nas-ip-address) original value given at command line.  */
  const char *nasip_help; /**< @brief Unique IP address of the NAS (nas-ip-address) help description.  */
  char * ssid_arg;	/**< @brief SSID of the session.  */
  char * ssid_orig;	/**< @brief SSID of the session original value given at command line.  */
  const char *ssid_help; /**< @brief SSID of the session help description.  */
  char * vlan_arg;	/**< @brief VLAN of the session.  */
  char * vlan_orig;	/**< @brief VLAN of the session original value given at command line.  */
  const char *vlan_help; /**< @brief VLAN of the session help description.  */
  char * cmdsocket_arg;	/**< @brief path to the command unix socket.  */
  char * cmdsocket_orig;	/**< @brief path to the command unix socket original value given at command line.  */
  const char *cmdsocket_help; /**< @brief path to the command unix socket help description.  */
  int radiusoriginalurl_flag;	/**< @brief Turn on the sending of ChilliSpot-OriginalURL in Access-Request (default=off).  */
  const char *radiusoriginalurl_help; /**< @brief Turn on the sending of ChilliSpot-OriginalURL in Access-Request help description.  */
  int swapoctets_flag;	/**< @brief Swap the meaning of input/output octets/packets (default=off).  */
  const char *swapoctets_help; /**< @brief Swap the meaning of input/output octets/packets help description.  */
  int usestatusfile_flag;	/**< @brief Use the status file to keep track of sessions (default=off).  */
  const char *usestatusfile_help; /**< @brief Use the status file to keep track of sessions help description.  */
  char * localusers_arg;	/**< @brief File keep 'Local' usernames and passwords.  */
  char * localusers_orig;	/**< @brief File keep 'Local' usernames and passwords original value given at command line.  */
  const char *localusers_help; /**< @brief File keep 'Local' usernames and passwords help description.  */
  char * postauthproxy_arg;	/**< @brief IP of an upstream transparent proxy.  */
  char * postauthproxy_orig;	/**< @brief IP of an upstream transparent proxy original value given at command line.  */
  const char *postauthproxy_help; /**< @brief IP of an upstream transparent proxy help description.  */
  int postauthproxyport_arg;	/**< @brief Port of an upstream transparent proxy (default='0').  */
  char * postauthproxyport_orig;	/**< @brief Port of an upstream transparent proxy original value given at command line.  */
  const char *postauthproxyport_help; /**< @brief Port of an upstream transparent proxy help description.  */
  int wpaguests_flag;	/**< @brief Allow WPA 'Guest' access (default=off).  */
  const char *wpaguests_help; /**< @brief Allow WPA 'Guest' access help description.  */
  int openidauth_flag;	/**< @brief Allow OpenID authentication (default=off).  */
  const char *openidauth_help; /**< @brief Allow OpenID authentication help description.  */
  int papalwaysok_flag;	/**< @brief Always allow 'PAP' authentication (depreciated; always on) (default=off).  */
  const char *papalwaysok_help; /**< @brief Always allow 'PAP' authentication (depreciated; always on) help description.  */
  int chillixml_flag;	/**< @brief Use ChilliSpot XML in WISPr blocks (default=off).  */
  const char *chillixml_help; /**< @brief Use ChilliSpot XML in WISPr blocks help description.  */
  int acctupdate_flag;	/**< @brief Allow updating of session attributes in Accounting-Response (default=off).  */
  const char *acctupdate_help; /**< @brief Allow updating of session attributes in Accounting-Response help description.  */
  int dnsparanoia_flag;	/**< @brief Inspect DNS packets and drop responses with any non- A, CNAME, SOA, or MX records (to prevent dns tunnels) (default=off).  */
  const char *dnsparanoia_help; /**< @brief Inspect DNS packets and drop responses with any non- A, CNAME, SOA, or MX records (to prevent dns tunnels) help description.  */
  int usetap_flag;	/**< @brief Use a TAP instead of TUN (linux only) (default=off).  */
  const char *usetap_help; /**< @brief Use a TAP instead of TUN (linux only) help description.  */
  
  int help_given ;	/**< @brief Whether help was given.  */
  int version_given ;	/**< @brief Whether version was given.  */
  int fg_given ;	/**< @brief Whether fg was given.  */
  int debug_given ;	/**< @brief Whether debug was given.  */
  int debugfacility_given ;	/**< @brief Whether debugfacility was given.  */
  int logfacility_given ;	/**< @brief Whether logfacility was given.  */
  int conf_given ;	/**< @brief Whether conf was given.  */
  int interval_given ;	/**< @brief Whether interval was given.  */
  int pidfile_given ;	/**< @brief Whether pidfile was given.  */
  int statedir_given ;	/**< @brief Whether statedir was given.  */
  int net_given ;	/**< @brief Whether net was given.  */
  int dhcpstart_given ;	/**< @brief Whether dhcpstart was given.  */
  int dhcpend_given ;	/**< @brief Whether dhcpend was given.  */
  int dynip_given ;	/**< @brief Whether dynip was given.  */
  int nodynip_given ;	/**< @brief Whether nodynip was given.  */
  int statip_given ;	/**< @brief Whether statip was given.  */
  int dns1_given ;	/**< @brief Whether dns1 was given.  */
  int dns2_given ;	/**< @brief Whether dns2 was given.  */
  int domain_given ;	/**< @brief Whether domain was given.  */
  int ipup_given ;	/**< @brief Whether ipup was given.  */
  int ipdown_given ;	/**< @brief Whether ipdown was given.  */
  int conup_given ;	/**< @brief Whether conup was given.  */
  int condown_given ;	/**< @brief Whether condown was given.  */
  int txqlen_given ;	/**< @brief Whether txqlen was given.  */
  int tundev_given ;	/**< @brief Whether tundev was given.  */
  int radiuslisten_given ;	/**< @brief Whether radiuslisten was given.  */
  int radiusserver1_given ;	/**< @brief Whether radiusserver1 was given.  */
  int radiusserver2_given ;	/**< @brief Whether radiusserver2 was given.  */
  int radiusauthport_given ;	/**< @brief Whether radiusauthport was given.  */
  int radiusacctport_given ;	/**< @brief Whether radiusacctport was given.  */
  int radiussecret_given ;	/**< @brief Whether radiussecret was given.  */
  int radiustimeout_given ;	/**< @brief Whether radiustimeout was given.  */
  int radiusretry_given ;	/**< @brief Whether radiusretry was given.  */
  int radiusretrysec_given ;	/**< @brief Whether radiusretrysec was given.  */
  int radiusnasid_given ;	/**< @brief Whether radiusnasid was given.  */
  int radiuslocationid_given ;	/**< @brief Whether radiuslocationid was given.  */
  int radiuslocationname_given ;	/**< @brief Whether radiuslocationname was given.  */
  int locationname_given ;	/**< @brief Whether locationname was given.  */
  int radiusnasporttype_given ;	/**< @brief Whether radiusnasporttype was given.  */
  int coaport_given ;	/**< @brief Whether coaport was given.  */
  int coanoipcheck_given ;	/**< @brief Whether coanoipcheck was given.  */
  int proxylisten_given ;	/**< @brief Whether proxylisten was given.  */
  int proxyport_given ;	/**< @brief Whether proxyport was given.  */
  int proxyclient_given ;	/**< @brief Whether proxyclient was given.  */
  int proxysecret_given ;	/**< @brief Whether proxysecret was given.  */
  int dhcpif_given ;	/**< @brief Whether dhcpif was given.  */
  int dhcpmac_given ;	/**< @brief Whether dhcpmac was given.  */
  int lease_given ;	/**< @brief Whether lease was given.  */
  int eapolenable_given ;	/**< @brief Whether eapolenable was given.  */
  int uamserver_given ;	/**< @brief Whether uamserver was given.  */
  int uamhomepage_given ;	/**< @brief Whether uamhomepage was given.  */
  int uamsecret_given ;	/**< @brief Whether uamsecret was given.  */
  int uamlisten_given ;	/**< @brief Whether uamlisten was given.  */
  int uamport_given ;	/**< @brief Whether uamport was given.  */
  int uamuiport_given ;	/**< @brief Whether uamuiport was given.  */
  unsigned int uamallowed_given ;	/**< @brief Whether uamallowed was given.  */
  unsigned int uamdomain_given ;	/**< @brief Whether uamdomain was given.  */
  int uamanydns_given ;	/**< @brief Whether uamanydns was given.  */
  int uamanyip_given ;	/**< @brief Whether uamanyip was given.  */
  int wisprlogin_given ;	/**< @brief Whether wisprlogin was given.  */
  int nouamsuccess_given ;	/**< @brief Whether nouamsuccess was given.  */
  int nouamwispr_given ;	/**< @brief Whether nouamwispr was given.  */
  int uamlogoutip_given ;	/**< @brief Whether uamlogoutip was given.  */
  int defsessiontimeout_given ;	/**< @brief Whether defsessiontimeout was given.  */
  int defidletimeout_given ;	/**< @brief Whether defidletimeout was given.  */
  int definteriminterval_given ;	/**< @brief Whether definteriminterval was given.  */
  int macauth_given ;	/**< @brief Whether macauth was given.  */
  unsigned int macallowed_given ;	/**< @brief Whether macallowed was given.  */
  int macsuffix_given ;	/**< @brief Whether macsuffix was given.  */
  int macpasswd_given ;	/**< @brief Whether macpasswd was given.  */
  int macallowlocal_given ;	/**< @brief Whether macallowlocal was given.  */
  int wwwdir_given ;	/**< @brief Whether wwwdir was given.  */
  int wwwbin_given ;	/**< @brief Whether wwwbin was given.  */
  int uamui_given ;	/**< @brief Whether uamui was given.  */
  int adminuser_given ;	/**< @brief Whether adminuser was given.  */
  int adminpasswd_given ;	/**< @brief Whether adminpasswd was given.  */
  int nasmac_given ;	/**< @brief Whether nasmac was given.  */
  int nasip_given ;	/**< @brief Whether nasip was given.  */
  int ssid_given ;	/**< @brief Whether ssid was given.  */
  int vlan_given ;	/**< @brief Whether vlan was given.  */
  int cmdsocket_given ;	/**< @brief Whether cmdsocket was given.  */
  int radiusoriginalurl_given ;	/**< @brief Whether radiusoriginalurl was given.  */
  int swapoctets_given ;	/**< @brief Whether swapoctets was given.  */
  int usestatusfile_given ;	/**< @brief Whether usestatusfile was given.  */
  int localusers_given ;	/**< @brief Whether localusers was given.  */
  int postauthproxy_given ;	/**< @brief Whether postauthproxy was given.  */
  int postauthproxyport_given ;	/**< @brief Whether postauthproxyport was given.  */
  int wpaguests_given ;	/**< @brief Whether wpaguests was given.  */
  int openidauth_given ;	/**< @brief Whether openidauth was given.  */
  int papalwaysok_given ;	/**< @brief Whether papalwaysok was given.  */
  int chillixml_given ;	/**< @brief Whether chillixml was given.  */
  int acctupdate_given ;	/**< @brief Whether acctupdate was given.  */
  int dnsparanoia_given ;	/**< @brief Whether dnsparanoia was given.  */
  int usetap_given ;	/**< @brief Whether usetap was given.  */

} ;

/** @brief The additional parameters to pass to parser functions */
struct cmdline_parser_params
{
  int override; /**< @brief whether to override possibly already present options (default 0) */
  int initialize; /**< @brief whether to initialize the option structure gengetopt_args_info (default 0) */
  int check_required; /**< @brief whether to check that all required options were provided (default 0) */
  int check_ambiguity; /**< @brief whether to check for options already specified in the option structure gengetopt_args_info (default 0) */
} ;

/** @brief the purpose string of the program */
extern const char *gengetopt_args_info_purpose;
/** @brief the usage string of the program */
extern const char *gengetopt_args_info_usage;
/** @brief all the lines making the help output */
extern const char *gengetopt_args_info_help[];

/**
 * The command line parser
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser (int argc, char * const *argv,
  struct gengetopt_args_info *args_info);

/**
 * The command line parser (version with additional parameters - deprecated)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param override whether to override possibly already present options
 * @param initialize whether to initialize the option structure my_args_info
 * @param check_required whether to check that all required options were provided
 * @return 0 if everything went fine, NON 0 if an error took place
 * @deprecated use cmdline_parser_ext() instead
 */
int cmdline_parser2 (int argc, char * const *argv,
  struct gengetopt_args_info *args_info,
  int override, int initialize, int check_required);

/**
 * The command line parser (version with additional parameters)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param params additional parameters for the parser
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_ext (int argc, char * const *argv,
  struct gengetopt_args_info *args_info,
  struct cmdline_parser_params *params);

/**
 * Save the contents of the option struct into a (text) file.
 * This file can be read by the config file parser (if generated by gengetopt)
 * @param filename the file where to save
 * @param args_info the option struct to save
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_file_save(const char *filename,
  struct gengetopt_args_info *args_info);

/**
 * Print the help
 */
void cmdline_parser_print_help(void);
/**
 * Print the version
 */
void cmdline_parser_print_version(void);

/**
 * Allocates dynamically a cmdline_parser_params structure and initializes
 * all its fields to 0
 * @return the initialized cmdline_parser_params structure
 */
struct cmdline_parser_params *cmdline_parser_params_init();

/**
 * Initializes the passed gengetopt_args_info structure's fields
 * (also set default values for options that have a default)
 * @param args_info the structure to initialize
 */
void cmdline_parser_init (struct gengetopt_args_info *args_info);
/**
 * Deallocates the string fields of the gengetopt_args_info structure
 * (but does not deallocate the structure itself)
 * @param args_info the structure to deallocate
 */
void cmdline_parser_free (struct gengetopt_args_info *args_info);

/**
 * The config file parser (deprecated version)
 * @param filename the name of the config file
 * @param args_info the structure where option information will be stored
 * @param override whether to override possibly already present options
 * @param initialize whether to initialize the option structure my_args_info
 * @param check_required whether to check that all required options were provided
 * @return 0 if everything went fine, NON 0 if an error took place
 * @deprecated use cmdline_parser_config_file() instead
 */
int cmdline_parser_configfile (char * const filename,
  struct gengetopt_args_info *args_info,
  int override, int initialize, int check_required);

/**
 * The config file parser
 * @param filename the name of the config file
 * @param args_info the structure where option information will be stored
 * @param params additional parameters for the parser
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_config_file (char * const filename,
  struct gengetopt_args_info *args_info,
  struct cmdline_parser_params *params);

/**
 * Checks that all the required options were specified
 * @param args_info the structure to check
 * @param prog_name the name of the program that will be used to print
 *   possible errors
 * @return
 */
int cmdline_parser_required (struct gengetopt_args_info *args_info,
  const char *prog_name);


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* CMDLINE_H */

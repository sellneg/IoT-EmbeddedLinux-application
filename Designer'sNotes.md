# Hot Runner Controller
Created Tuesday 09 January 2018

This is my journal of HRC & M2 activity

# OPC UA Server
Created Tuesday 09 January 2018

Activity creating/updating OPC UA server on M2 Console

# EUROMAP
Created Tuesday 09 January 2018


# Smart Mold
Created Friday 15 December 2017


# 0 REQUIREMENTS
Created Friday 15 December 2017


| ID # | Requirement | Priority | Verification Method | Business Case Cross Reference |   |
|:-----|:------------|:---------|:--------------------|:------------------------------|:--|
|      |             |          |                     |                               |   |


# Priority README
Created Friday 15 December 2017


A product must be delivered with all Core and a good portion of Essential requirements represented, and with a plan to implement the remaining Essential requirements in the subsequent phase.

|   | Priority     | Description                                                                                                                                                                                       |
|:--|:-------------|:--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| C | Core         | Requirements without which the product may as well not be developed at all; it will be of no use to most Customers without these.                                                                 |
| E | Essential    | Requirements for which a short-term work-around could be developed (or for which an old process can be used for a little while longer), but over the long run, the requirements have to be there. |
| D | Desirable    | Requirements that are the "bells and whistles" which may be precious to certain constituencies, but without which the product will function just fine.                                            |
| N | Nice to Have |                                                                                                                                                                                                   |


# Verification Method README
Created Friday 15 December 2017

Verification Method
|   | Description                                                                                                                                                                                                                                                                                            |
|:--|:-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| D | Demonstration is a requirement that the system can demonstrate without external test equipment.                                                                                                                                                                                                        |
| T | Test is a requirement that requires some external piece of test equipment (e.g. logic analyzer, and/or volt meter).                                                                                                                                                                                    |
| A | Analyze is a requirement that is met indirectly through a logical conclusion or mathematical analysis of a result. For example, Algorithms for congestion: the designer may need to show that the requirement is met through the analysis of count and occupancy calculations in software or firmware. |
| I | Inspection is verification through a visual comparison. For example, quality of welding may be done through a visual comparison against an in-house standard.                                                                                                                                          |


# 0.1 R&D
Created Friday 15 December 2017


# BETA
Created Friday 15 December 2017


# CVeMonitor
Created Friday 15 December 2017



# Reverse Engineering
Created Friday 15 December 2017

# Pre-George
Created Friday 15 December 2017

(Old Stuff)

# Concept - Fred
Created Friday 15 December 2017

Concept only for you to do what you want with it or pursue.

I am only sending this to you.  Please don’t feel any obligation to use any of this, some of it or all of it.
If you feel lead to pass it on, by all means do so.
I was at a BBB user’s group meeting at GHI and could not stop thinking about packaging.  
Sorry if I tread in your domain, but if push came to shove and the Group had to make another 100 units, who knows if this might help?
These are ALL HARSH ENVIRONMENT CONNECTORS.

dimensions taken from catalog.

sorry, just found this and documenting it in this email.
Never saw or new these harsh environment connectors existed until today.
I just assumed they must exist.  They show covers for when not in use, etc.

just found complete “Harsh Environment Connectors” from “Amphenol Commercial Products” Group.
<https://www.amphenolcanada.com//ProductSearch//pdf//RUGGED_CAT.pdf> 

Last note:

Connector 1: DB9 sealed (they have more pin versions in catalog above).
use the right angle sealed db9 type connector for sensor connections  Amphenol Commercial Product MDB-E09SA-700.
<http://www.digikey.com/product-detail/en/amphenol-commercial-products/MDB-E09SA-700/MDB-E09SA-700-ND/1242665> 
<https://www.amphenolcanada.com/ProductSearch/drawings/AC/MDBE09SA700.pdf> 
<https://www.amphenolcanada.com/SelectPartNum.aspx?Series=MDBR> 

Digikey price in 1,000 pieces $10.64 USD.
![](file:///C:/Users/sellnerge/Documents/!SmartMold/Powerpoint/pictures/ampphenol2.png)

9 pins Should allow a digital input switch, analog straingage sensor, Energy Havest Power Source.

Connector 2: Ethernet Sealed.
(Can use 1 or 2, second port per Ei3 discussions at one time)
 ![](file:///C:/Users/sellnerge/Documents/!SmartMold/Powerpoint/pictures/ampphenol3.png)     

Connector 3: Dual Stacked USB
- one port for debug/factory service/remote power.
- one port for application useage, maybe usb wifi antenna !
![](file:///C:/Users/sellnerge/Documents/!SmartMold/Powerpoint/pictures/ampphenol4.png)


Adafruit Industries USB WiFi 802.11b/g/n Module with Antenna for Raspberry Pi -  microcenter $19.99 USD.
<http://www.microcenter.com/product/456262/USB_WiFi_80211b-g-n_Module_with_Antenna_for_Raspberry_Pi> 
 ![](file:///C:/Users/sellnerge/Documents/!SmartMold/Powerpoint/pictures/ampphenol5.png)
This one may not be rated the best, but shows the possibilities.


So now I'm completely backing up and saying - if we go with a new design, we really should use this.  It's IP67 - so we can't do better, and it can suit the "plug-in" option of a new board.

Jeff, possible sealed Ethernet connector, I know you have the circular versions but not sure if they are right angle pcb mount.
AMPHENOL COMMERCIAL PRODUCTS  MRJ-5381-01  Sealed Ethernet, MRJ Series, RJ45, Jack, 8 Contact, PCB Mount, Gold Plated Contacts
<http://www.newark.com/amphenol-commercial-products/mrj-5381-01/cat5-rj45-modular-jack-8-position/dp/01M3132> 


Jeff,

Could also add led indicator for power source running, not battery.
Could have recessed “reset” pushbutton near outside connections.

Have a Great Day,
Fred Schroeder 
Sr. Product Engineer – R&D Electronics Engineering


Jeff,

I would like to start thinking about smart mold b or version 2.
Lets say Bryan comes back from K show and we need to make 100 units using same metal box.

Lets assume GHI could repackage bealgebone on one board, maybe 2,   $30K in 3 months with CE/FCC testing.
This does NOT include any software other than help getting SmartMold Software running in this repackaged verison.
Could be NON-Beaglebone image and more standard Linux OS version. (These may be more similar than I know.)

What would it have to have angled sealed connectors that the board would just slide into your metal existing box?

Tell me to mind my own business if you think I should . 

Have a Great Day,
Fred Schroeder 
Sr. Product Engineer – R&D Electronics Engineering
​       

# 1 SPECIFICATION
Created Friday 15 December 2017

| ID # | Specification | Priority | Verification Method | Requirements Cross Reference |   |
|:-----|:--------------|:---------|:--------------------|:-----------------------------|:--|
|      |               |          |                     |                              |   |


# Physical
Created Friday 15 December 2017

Physcal design

Case - box
Connectors

Smart Mold:Physical:CVeMonitor is IP54 (splash proof), should try to achieve this.
Smart Mold:Physical:CVeMonitor is also published to withstand 90°C.

<http://www.hammondmfg.com/scpg.htm>


# Priority README
Created Friday 15 December 2017

A product must be delivered with all Core and a good portion of Essential requirements represented, and with a plan to implement the remaining Essential requirements in the subsequent phase.

|   | Priority     | Description                                                                                                                                                                                       |
|:--|:-------------|:--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| C | Core         | Requirements without which the product may as well not be developed at all; it will be of no use to most Customers without these.                                                                 |
| E | Essential    | Requirements for which a short-term work-around could be developed (or for which an old process can be used for a little while longer), but over the long run, the requirements have to be there. |
| D | Desirable    | Requirements that are the "bells and whistles" which may be precious to certain constituencies, but without which the product will function just fine.                                            |
| N | Nice to Have |                                                                                                                                                                                                   |


# Verification Method README
Created Friday 15 December 2017

Verification Method
|   | Description                                                                                                                                                                                                                                                                                            |
|:--|:-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| D | Demonstration is a requirement that the system can demonstrate without external test equipment.                                                                                                                                                                                                        |
| T | Test is a requirement that requires some external piece of test equipment (e.g. logic analyzer, and/or volt meter).                                                                                                                                                                                    |
| A | Analyze is a requirement that is met indirectly through a logical conclusion or mathematical analysis of a result. For example, Algorithms for congestion: the designer may need to show that the requirement is met through the analysis of count and occupancy calculations in software or firmware. |
| I | Inspection is verification through a visual comparison. For example, quality of welding may be done through a visual comparison against an in-house standard.                                                                                                                                          |


# 2 DESIGN
Created Friday 15 December 2017


# EMail Alerts
Created Monday 05 February 2018

<http://www.walkernews.net/2010/05/18/how-to-configure-sendmail-to-relay-email-to-exchange-server/>
<http://www.binarytides.com/linux-mail-command-examples/>
<https://www.linuxquestions.org/questions/%2Absd-17/how-to-prevent-root-relaying-in-sendmail-410867/>
<https://lists.freebsd.org/pipermail/freebsd-questions/2005-December/106771.html>


Microsoft Windows [Version 6.1.7601]
Copyright (c) 2009 Microsoft Corporation.  All rights reserved.

C:\Users\sellnerge>ping WHQCAS01.mm.local

Pinging WHQCAS01.mm.local [10.30.1.71] with 32 bytes of data:
Reply from 10.30.1.71: bytes=32 time=1ms TTL=128
Reply from 10.30.1.71: bytes=32 time=1ms TTL=128
Reply from 10.30.1.71: bytes=32 time=1ms TTL=128
Reply from 10.30.1.71: bytes=32 time=1ms TTL=128

Ping statistics for 10.30.1.71:
Packets: Sent = 4, Received = 4, Lost = 0 (0% loss),
Approximate round trip times in milli-seconds:
Minimum = 1ms, Maximum = 1ms, Average = 1ms

C:\Users\sellnerge>ping WHQCAS01.mm.local


On Debian 8 (Jessie) works:

$ sudo hostnamectl set-hostname yourdomain.com

Then test it this way:

$ hostname
yourdomain.com



# Exchange Testing
Created Monday 26 March 2018

mmtools@osboxes:~$ mail -s "SmartMold Alert" [Fred_Schroeder@milacron.com](mailto:Fred_Schroeder@milacron.com)  </dev/null
mmtools@osboxes:~$ mail -s "SmartMold Alert" [gsellner@moldmasters.com](mailto:gsellner@moldmasters.com)  </dev/null

mail -s "SmartMold Alert" [dtam@moldmasters.com](mailto:dtam@moldmasters.com)  </dev/null
mmtools@osboxes:~$ mail -s "SmartMold Alert" [George_Sellner@milacron.com](mailto:George_Sellner@milacron.com)  </dev/null
mmtools@osboxes:~$ mail -s "SmartMold Alert" [Dannis_Tam@milacron.com](mailto:Dannis_Tam@milacron.com)  </dev/null

mmtools@osboxes:~$ mail -s "SmartMold Alert" [gsellner.endress@gmail.com](mailto:gsellner.endress@gmail.com)  </dev/null

mmtools@osboxes:~$ mail -s "SmartMold Alert" [dtam@moldmasters.com](mailto:dtam@moldmasters.com)  </dev/null

mmtools@osboxes:~$ hostname

mmtools@osboxes:~$ sudo hostnamectl set-hostname osboxes.local
mmtools@osboxes:~$ sudo osboxes set-hostname osboxes.local
mmtools@osboxes:~$ mail -s "testing" [george_sellner@milacron.com](mailto:george_sellner@milacron.com)  </dev/null
mmtools@osboxes:~$ hostname
mmtools@osboxes:~$ ping WHQCAS01.mm.local
mmtools@osboxes:~$ mail -s "testing" [george_sellner@milacron.com](mailto:george_sellner@milacron.com)  </dev/null
mmtools@osboxes:~$ ifconfig

mmtools@osboxes:~$ mail -s "testing" [george_sellner@milacron.com](mailto:george_sellner@milacron.com)  </dev/null
mmtools@osboxes:~$ mail -s "testing" WHQCAS01.mm.local </dev/null
mmtools@osboxes:~$ sudo apt install mailutils
mmtools@osboxes:~$ resolver
mmtools@osboxes:~$ man resolvconf
mmtools@osboxes:~$ sudo nano [/etc/resolv.conf](file:///C:/etc/resolv.conf)

  GNU nano 2.5.3            File: /etc/resolv.conf                              

# Dynamic resolv.conf(5) file for glibc resolver(3) generated by resolvconf(8)
#     DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN
nameserver 127.0.1.1
search mm.local local



mmtools@osboxes:~$ sudo apt-get install sendmail

mmtools@osboxes:~$ whereis sendmail.cf
mmtools@osboxes:~$ ls /etc
mmtools@osboxes:~$ sudo sendmailconfig
mmtools@osboxes:~$ echo '$=w' | sendmail -bt
mmtools@osboxes:~$ sudo sendmailconfig
mmtools@osboxes:~$ sudo nano /etc/hostname
mmtools@osboxes:~$ echo '$=w' | sendmail -bt
mmtools@osboxes:~$ sudo systemctl status sendmail.service
mmtools@osboxes:~$ sudo systemctl restart sendmail.service

mmtools@osboxes:~$ sudo nano /etc/hosts

127.0.0.1       localhost
127.0.1.1       osboxes

10.30.1.71      WHQCAS01.mm.local


# The following lines are desirable for IPv6 capable hosts
::1     ip6-localhost ip6-loopback
fe00::0 ip6-localnet
ff00::0 ip6-mcastprefix
ff02::1 ip6-allnodes
ff02::2 ip6-allrouters

mmtools@osboxes:~$ sudo nano /etc/rc.conf
mmtools@osboxes:~$ sudo nano /etc/mail/local-host-names

localhost
osboxes
osboxes.local

mmtools@osboxes:~$ sudo /etc/mail/local-host-names
mmtools@osboxes:~$ sudo systemctl status sendmail.service
mmtools@osboxes:~$ sudo systemctl restart sendmail.service
mmtools@osboxes:~$ sudo nano /etc/hosts
mmtools@osboxes:~$ sudo systemctl status sendmail.service
mmtools@osboxes:~$ sudo nano /etc/mail/sendmail.cf
mmtools@osboxes:~$ sudo cat /etc/mail/sendmail.cf
#
#   Copyright (c) 1998-2005 Richard Nelson.  All Rights Reserved.
#
#  This file is used to configure Sendmail for use with Debian systems.
#
#
# Copyright (c) 1998-2004, 2009, 2010 Proofpoint, Inc. and its suppliers.
#	All rights reserved.
# Copyright (c) 1983, 1995 Eric P. Allman.  All rights reserved.
# Copyright (c) 1988, 1993
#	The Regents of the University of California.  All rights reserved.
#
# By using this file, you agree to the terms and conditions set
# forth in the LICENSE file which can be found at the top level of
# the sendmail distribution.
#
#

######################################################################
######################################################################
#####
#####		SENDMAIL CONFIGURATION FILE
#####
##### built by [root@osboxes.local](mailto:root@osboxes.local) on Mon Feb 5 11:33:00 EST 2018
##### in /home/mmtools
##### using /usr/share/sendmail/cf/ as configuration include directory
#####
######################################################################
#####
#####	DO NOT EDIT THIS FILE!  Only edit the source .mc file.
#####
######################################################################
######################################################################

#####  $Id: cfhead.m4,v 8.122 2013-11-22 20:51:13 ca Exp $  #####
#####  $Id: cf.m4,v 8.33 2013-11-22 20:51:13 ca Exp $  #####
#####  $Id: sendmail.mc, v 8.15.2-3 2015-12-10 18:02:49 cowboy Exp $  #####
#####  $Id: autoconf.m4, v 8.15.2-3 2015-12-10 18:02:49 cowboy Exp $  #####
#####  $Id: debian.m4, v 8.15.2-3 2015-12-10 18:02:49 cowboy Exp $  #####
#
#-------------------------------------------------------------------------
#
# Undocumented features are available in Debian Sendmail 8.15.2-3.
#	* none
#
# _FFR_ features are available in Debian Sendmail 8.15.2-3.
#	* milter
#	*  -D_FFR_QUEUE_SCHED_DBG -D_FFR_RESET_MACRO_GLOBALS -D_FFR_TLS_1 -D_FFR_TLS_EC -D_FFR_DEAL_WITH_ERROR_SSL
#-------------------------------------------------------------------------
#
# These _FFR_ features are for sendmail.mc processing
#

#-------------------------------------------------------------------------
#####  $Id: debian-mta.m4, v 8.15.2-3 2015-12-10 18:02:49 cowboy Exp $  #####


#####  $Id: no_default_msa.m4,v 8.3 2013-11-22 20:51:11 ca Exp $  #####

#####  $Id: use_cw_file.m4,v 8.12 2013-11-22 20:51:11 ca Exp $  #####


#####  $Id: access_db.m4,v 8.28 2013-11-22 20:51:11 ca Exp $  #####

#####  $Id: greet_pause.m4,v 1.5 2013-11-22 20:51:11 ca Exp $  #####

#####  $Id: delay_checks.m4,v 8.9 2013-11-22 20:51:11 ca Exp $  #####

#####  $Id: conncontrol.m4,v 1.5 2013-11-22 20:51:11 ca Exp $  #####


#####  $Id: ratecontrol.m4,v 1.6 2013-11-22 20:51:11 ca Exp $  #####



#####  $Id: proto.m4,v 8.762 2013-11-22 20:51:13 ca Exp $  #####

# level 10 config file format
V10/Berkeley

# override file safeties - setting this option compromises system security,
# addressing the actual file configuration problem is preferred
# need to set this before any file actions are encountered in the cf file
O DontBlameSendmail=,AssumeSafeChown,ForwardFileInGroupWritableDirPath,GroupWritableForwardFileSafe,GroupWritableIncludeFileSafe,IncludeFileInGroupWritableDirPath,DontWarnForwardFileInUnsafeDirPath,TrustStickyBit,NonRootSafeAddr,GroupWritableIncludeFile,GroupReadableDefaultAuthInfoFile

# default LDAP map specification
# need to set this now before any LDAP maps are defined
#O LDAPDefaultSpec=-h localhost

##################
#   local info   #
##################

# my LDAP cluster
# need to set this before any LDAP lookups are done (including classes)
#D{sendmailMTACluster}$m

Cwlocalhost
# file containing names of hosts for which we receive email
Fw/etc/mail/local-host-names %[^\#]

# my official domain name
# ... define this only if sendmail cannot automatically determine your domain
#Dj$w.Foo.COM

# host/domain names ending with a token in class P are canonical
CP.

# "Smart" relay host (may be null)
DS


# operators that cannot be in local usernames (i.e., network indicators)
CO @ % !

# a class with just dot (for identifying canonical names)
C..

# a class with just a left bracket (for identifying domain literals)
C[[

# access_db acceptance class
C{Accept}OK RELAY


# Resolve map (to check if a host exists in check_mail)
Kresolve host -a<OKR> -T<TEMP>
C{ResOk}OKR


# Hosts for which relaying is permitted ($=R)
FR-o /etc/mail/relay-domains %[^\#]

# arithmetic map
Karith arith
# macro storage map
Kmacro macro
# possible values for TLS_connection in access map
C{Tls}VERIFY ENCR





# dequoting map
Kdequote dequote

# class E: names that should be exposed as from this host, even if we masquerade
# class L: names that should be delivered locally, even if we have a relay
# class M: domains that should be converted to $M
# class N: domains that should not be converted to $M
#CL root



# my name for error messages
DnMAILER-DAEMON


# Access list database (for spam stomping)
Kaccess hash -T<TMPF> /etc/mail/access

# Configuration version number
DZ8.15.2/Debian-3


###############
#   Options   #
###############

# strip message body to 7 bits on input?
O SevenBitInput=False

# 8-bit data handling
#O EightBitMode=pass8

# wait for alias file rebuild (default units: minutes)
O AliasWait=10

# location of alias file
O AliasFile=/etc/mail/aliases

# minimum number of free blocks on filesystem
O MinFreeBlocks=100

# maximum message size
#O MaxMessageSize=0

# substitution for space (blank) characters
O BlankSub=.

# avoid connecting to "expensive" mailers on initial submission?
O HoldExpensive=False

# checkpoint queue runs after every N successful deliveries
#O CheckpointInterval=10

# default delivery mode
O DeliveryMode=background

# error message header/file
#O ErrorHeader=/etc/mail/error-header

# error mode
#O ErrorMode=print

# save Unix-style "From_" lines at top of header?
#O SaveFromLine=False

# queue file mode (qf files)
O QueueFileMode=0640

# temporary file mode
O TempFileMode=0640

# match recipients against GECOS field?
#O MatchGECOS=False

# maximum hop count
O MaxHopCount=100

# location of help file
O HelpFile=/etc/mail/helpfile

# ignore dots as terminators in incoming messages?
#O IgnoreDots=False

# name resolver options
O ResolverOptions=+WorkAroundBrokenAAAA

# deliver MIME-encapsulated error messages?
O SendMimeErrors=True

# Forward file search path
O ForwardPath=$z/.forward.$w:$z/.forward

# open connection cache size
O ConnectionCacheSize=2

# open connection cache timeout
O ConnectionCacheTimeout=5m

# persistent host status directory
#O HostStatusDirectory=.hoststat

# single thread deliveries (requires HostStatusDirectory)?
#O SingleThreadDelivery=False

# use Errors-To: header?
O UseErrorsTo=False

# use compressed IPv6 address format?
#O UseCompressedIPv6Addresses

# log level
O LogLevel=9

# send to me too, even in an alias expansion?
O MeToo=True

# verify RHS in newaliases?
O CheckAliases=False

# default messages to old style headers if no special punctuation?
O OldStyleHeaders=True

# SMTP daemon options

O DaemonPortOptions=Family=inet,  Name=MTA-v4, Port=smtp, Addr=127.0.0.1
O DaemonPortOptions=Family=inet,  Name=MSP-v4, Port=submission, M=Ea, Addr=127.0.0.1

# SMTP client options
#O ClientPortOptions=Family=inet, Address=0.0.0.0

# Modifiers to define {daemon_flags} for direct submissions
#O DirectSubmissionModifiers

# Use as mail submission program? See sendmail/SECURITY
#O UseMSP

# privacy flags
O PrivacyOptions=needmailhelo,needexpnhelo,needvrfyhelo,restrictqrun,restrictexpand,nobodyreturn,authwarnings

# who (if anyone) should get extra copies of error messages
#O PostmasterCopy=Postmaster

# slope of queue-only function
#O QueueFactor=600000

# limit on number of concurrent queue runners
#O MaxQueueChildren

# maximum number of queue-runners per queue-grouping with multiple queues
O MaxRunnersPerQueue=5

# priority of queue runners (nice(3))
#O NiceQueueRun

# shall we sort the queue by hostname first?
#O QueueSortOrder=priority

# minimum time in queue before retry
#O MinQueueAge=30m

# maximum time in queue before retry (if > 0; only for exponential delay)
#O MaxQueueAge

# how many jobs can you process in the queue?
#O MaxQueueRunSize=0

# perform initial split of envelope without checking MX records
#O FastSplit=1

# queue directory
O QueueDirectory=/var/spool/mqueue

# key for shared memory; 0 to turn off, -1 to auto-select
#O SharedMemoryKey=0

# file to store auto-selected key for shared memory (SharedMemoryKey = -1)
#O SharedMemoryKeyFile

# timeouts (many of these)
#O Timeout.initial=5m
#O Timeout.connect=5m
#O Timeout.aconnect=0s
O Timeout.iconnect=2m
#O Timeout.helo=5m
O Timeout.mail=2m
#O Timeout.rcpt=1h
O Timeout.datainit=2m
#O Timeout.datablock=1h
#O Timeout.datafinal=1h
O Timeout.rset=1m
O Timeout.quit=2m
#O Timeout.misc=2m
O Timeout.command=5m
O Timeout.ident=5s
#O Timeout.fileopen=60s
#O Timeout.control=2m
O Timeout.queuereturn=5d
#O Timeout.queuereturn.normal=5d
#O Timeout.queuereturn.urgent=2d
#O Timeout.queuereturn.non-urgent=7d
#O Timeout.queuereturn.dsn=5d
O Timeout.queuewarn=4h
#O Timeout.queuewarn.normal=4h
#O Timeout.queuewarn.urgent=1h
#O Timeout.queuewarn.non-urgent=12h
#O Timeout.queuewarn.dsn=4h
#O Timeout.hoststatus=30m
#O Timeout.resolver.retrans=5s
#O Timeout.resolver.retrans.first=5s
#O Timeout.resolver.retrans.normal=5s
#O Timeout.resolver.retry=4
#O Timeout.resolver.retry.first=4
#O Timeout.resolver.retry.normal=4
#O Timeout.lhlo=2m
#O Timeout.auth=10m
#O Timeout.starttls=1h

# time for DeliverBy; extension disabled if less than 0
#O DeliverByMin=0

# should we not prune routes in route-addr syntax addresses?
#O DontPruneRoutes=False

# queue up everything before forking?
O SuperSafe=True

# status file
O StatusFile=/var/lib/sendmail/sendmail.st

# time zone handling:
#  if undefined, use system default
#  if defined but null, use TZ envariable passed in
#  if defined and non-null, use that info
#O TimeZoneSpec=

# default UID (can be username or userid:groupid)
O DefaultUser=mail:mail

# list of locations of user database file (null means no lookup)
#O UserDatabaseSpec=/etc/mail/userdb

# fallback MX host
#O FallbackMXhost=fall.back.host.net

# fallback smart host
#O FallbackSmartHost=fall.back.host.net

# if we are the best MX host for a site, try it directly instead of config err
#O TryNullMXList=False

# load average at which we just queue messages
#O QueueLA=8

# load average at which we refuse connections
#O RefuseLA=12

# log interval when refusing connections for this long
#O RejectLogInterval=3h

# load average at which we delay connections; 0 means no limit
#O DelayLA=0

# maximum number of children we allow at one time
O MaxDaemonChildren=0

# maximum number of new connections per second
O ConnectionRateThrottle=15

# Width of the window 
O ConnectionRateWindowSize=10m

# work recipient factor
#O RecipientFactor=30000

# deliver each queued job in a separate process?
#O ForkEachJob=False

# work class factor
#O ClassFactor=1800

# work time factor
#O RetryFactor=90000

# default character set
#O DefaultCharSet=unknown-8bit

# service switch file (name hardwired on Solaris, Ultrix, OSF/1, others)
#O ServiceSwitchFile=/etc/mail/service.switch

# hosts file (normally /etc/hosts)
#O HostsFile=/etc/hosts

# dialup line delay on connection failure
#O DialDelay=0s

# action to take if there are no recipients in the message
#O NoRecipientAction=none

# chrooted environment for writing to files
O SafeFileEnvironment=/

# are colons OK in addresses?
#O ColonOkInAddr=True

# shall I avoid expanding CNAMEs (violates protocols)?
#O DontExpandCnames=False

# SMTP initial login message (old $e macro)
O SmtpGreetingMessage=$j Sendmail $v/$Z; $b; (No UCE/UBE) $?{client_addr}logging access from: ${client_name}(${client_resolve})-$_$.

# UNIX initial From header format (old $l macro)
O UnixFromLine=From $g $d

# From: lines that have embedded newlines are unwrapped onto one line
#O SingleLineFromHeader=False

# Allow HELO SMTP command that does not include a host name
#O AllowBogusHELO=False

# Characters to be quoted in a full name phrase (@,;:\()[] are automatic)
O MustQuoteChars=.'

# delimiter (operator) characters (old $o macro)
O OperatorChars=.:%@!^/[]+

# shall I avoid calling initgroups(3) because of high NIS costs?
#O DontInitGroups=False

# are group-writable :include: and .forward files (un)trustworthy?
# True (the default) means they are not trustworthy.
#O UnsafeGroupWrites=True


# where do errors that occur when sending errors get sent?
#O DoubleBounceAddress=postmaster

# issue temporary errors (4xy) instead of permanent errors (5xy)?
#O SoftBounce=False

# where to save bounces if all else fails
O DeadLetterDrop=/var/lib/sendmail/dead.letter

# what user id do we assume for the majority of the processing?
#O RunAsUser=sendmail

# maximum number of recipients per SMTP envelope
#O MaxRecipientsPerMessage=0

# limit the rate recipients per SMTP envelope are accepted
# once the threshold number of recipients have been rejected
O BadRcptThrottle=3


# shall we get local names from our installed interfaces?
#O DontProbeInterfaces=False

# Return-Receipt-To: header implies DSN request
O RrtImpliesDsn=False

# override connection address (for testing)
#O ConnectOnlyTo=0.0.0.0

# Trusted user for file ownership and starting the daemon
O TrustedUser=smmta

# Control socket for daemon management
O ControlSocketName=/var/run/sendmail/mta/smcontrol

# Maximum MIME header length to protect MUAs
#O MaxMimeHeaderLength=0/0

# Maximum length of the sum of all headers
#O MaxHeadersLength=32768

# Maximum depth of alias recursion
#O MaxAliasRecursion=10

# location of pid file
O PidFile=/var/run/sendmail/mta/sendmail.pid

# Prefix string for the process title shown on 'ps' listings
O ProcessTitlePrefix=MTA

# Data file (df) memory-buffer file maximum size
#O DataFileBufferSize=4096

# Transcript file (xf) memory-buffer file maximum size
#O XscriptFileBufferSize=4096

# lookup type to find information about local mailboxes
#O MailboxDatabase=pw

# override compile time flag REQUIRES_DIR_FSYNC
#O RequiresDirfsync=true

# list of authentication mechanisms
#O AuthMechanisms=EXTERNAL GSSAPI KERBEROS_V4 DIGEST-MD5 CRAM-MD5

# Authentication realm
#O AuthRealm

# default authentication information for outgoing connections
#O DefaultAuthInfo=/etc/mail/default-auth-info

# SMTP AUTH flags
#O AuthOptions

# SMTP AUTH maximum encryption strength
#O AuthMaxBits

# SMTP STARTTLS server options
#O TLSSrvOptions

# SSL cipherlist
#O CipherList
# server side SSL options
#O ServerSSLOptions
# client side SSL options
#O ClientSSLOptions

# Input mail filters
#O InputMailFilters


# CA directory
#O CACertPath
# CA file
#O CACertFile
# Server Cert
#O ServerCertFile
# Server private key
#O ServerKeyFile
# Client Cert
#O ClientCertFile
# Client private key
#O ClientKeyFile
# File containing certificate revocation lists 
#O CRLFile
# DHParameters (only required if DSA/DH is used)
#O DHParameters
# Random data source (required for systems without /dev/urandom under OpenSSL)
#O RandFile
# fingerprint algorithm (digest) to use for the presented cert
#O CertFingerprintAlgorithm

# Maximum number of "useless" commands before slowing down
#O MaxNOOPCommands=20

# Name to use for EHLO (defaults to $j)
#O HeloName



############################
# QUEUE GROUP DEFINITIONS  #
############################


###########################
#   Message precedences   #
###########################

Pfirst-class=0
Pspecial-delivery=100
Plist=-30
Pbulk=-60
Pjunk=-100

#####################
#   Trusted users   #
#####################

# this is equivalent to setting class "t"
#Ft/etc/mail/trusted-users %[^\#]
Troot
Tdaemon
Tuucp

#########################
#   Format of headers   #
#########################

H?P?Return-Path: <$g>
HReceived: $?sfrom $s $.$?_($?s$|from $.$_)
$.$?{auth_type}(authenticated$?{auth_ssf} bits=${auth_ssf}$.)
$.by $j ($v/$Z)$?r with $r$. id $i$?{tls_version}
(version=${tls_version} cipher=${cipher} bits=${cipher_bits} verify=${verify})$.$?u
for $u; $|;
$.$b
H?D?Resent-Date: $a
H?D?Date: $a
H?F?Resent-From: $?x$x <$g>$|$g$.
H?F?From: $?x$x <$g>$|$g$.
H?x?Full-Name: $x
# HPosted-Date: $a
# H?l?Received-Date: $b
H?M?Resent-Message-Id: <$t.$i@$j>
H?M?Message-Id: <$t.$i@$j>

#

######################################################################
######################################################################
#####
#####			REWRITING RULES
#####
######################################################################
######################################################################

############################################
###  Ruleset 3 -- Name Canonicalization  ###
############################################
Scanonify=3

# handle null input (translate to <@> special case)
R$@			$@ <@>

# strip group: syntax (not inside angle brackets!) and trailing semicolon
R$*			$: $1 <@>			mark addresses
R$* < $* > $* <@>	$: $1 < $2 > $3			unmark <addr>
R@ $* <@>		$: @ $1				unmark @host:...
R$* [ IPv6 : $+ ] <@>	$: $1 [ IPv6 : $2 ]		unmark IPv6 addr
R$* :: $* <@>		$: $1 :: $2			unmark node::addr
R:include: $* <@>	$: :include: $1			unmark :include:...
R$* : $* [ $* ]		$: $1 : $2 [ $3 ] <@>		remark if leading colon
R$* : $* <@>		$: $2				strip colon if marked
R$* <@>			$: $1				unmark
R$* ;			   $1				strip trailing semi
R$* < $+ :; > $*	$@ $2 :; <@>			catch <list:;>
R$* < $* ; >		   $1 < $2 >			bogus bracketed semi

# null input now results from list:; syntax
R$@			$@ :; <@>

# strip angle brackets -- note RFC733 heuristic to get innermost item
R$*			$: < $1 >			housekeeping <>
R$+ < $* >		   < $2 >			strip excess on left
R< $* > $+		   < $1 >			strip excess on right
R<>			$@ < @ >			MAIL FROM:<> case
R< $+ >			$: $1				remove housekeeping <>

# strip route address <@a,@b,@c:user@d> -> <user@d>
R@ $+ , $+		$2
R@ [ $* ] : $+		$2
R@ $+ : $+		$2

# find focus for list syntax
R $+ : $* ; @ $+	$@ $>Canonify2 $1 : $2 ; < @ $3 >	list syntax
R $+ : $* ;		$@ $1 : $2;			list syntax

# find focus for @ syntax addresses
R$+ @ $+		$: $1 < @ $2 >			focus on domain
R$+ < $+ @ $+ >		$1 $2 < @ $3 >			move gaze right
R$+ < @ $+ >		$@ $>Canonify2 $1 < @ $2 >	already canonical


# convert old-style addresses to a domain-based address
R$- ! $+		$@ $>Canonify2 $2 < @ $1 .UUCP >	resolve uucp names
R$+ . $- ! $+		$@ $>Canonify2 $3 < @ $1 . $2 >		domain uucps
R$+ ! $+		$@ $>Canonify2 $2 < @ $1 .UUCP >	uucp subdomains

# if we have % signs, take the rightmost one
R$* % $*		$1 @ $2				First make them all @s.
R$* @ $* @ $*		$1 % $2 @ $3			Undo all but the last.

R$* @ $*		$@ $>Canonify2 $1 < @ $2 >	Insert < > and finish

# else we must be a local name
R$*			$@ $>Canonify2 $1


################################################
###  Ruleset 96 -- bottom half of ruleset 3  ###
################################################

SCanonify2=96

# handle special cases for local names
R$* < @ localhost > $*		$: $1 < @ $j . > $2		no domain at all
R$* < @ localhost . $m > $*	$: $1 < @ $j . > $2		local domain
R$* < @ localhost . UUCP > $*	$: $1 < @ $j . > $2		.UUCP domain

# check for IPv4/IPv6 domain literal
R$* < @ [ $+ ] > $*		$: $1 < @@ [ $2 ] > $3		mark [addr]
R$* < @@ $=w > $*		$: $1 < @ $j . > $3		self-literal
R$* < @@ $+ > $*		$@ $1 < @ $2 > $3		canon IP addr





# if really UUCP, handle it immediately

# try UUCP traffic as a local address
R$* < @ $+ . UUCP > $*		$: $1 < @ $[ $2 $] . UUCP . > $3
R$* < @ $+ . . UUCP . > $*	$@ $1 < @ $2 . > $3

# hostnames ending in class P are always canonical
R$* < @ $* $=P > $*		$: $1 < @ $2 $3 . > $4
R$* < @ $* $~P > $*		$: $&{daemon_flags} $| $1 < @ $2 $3 > $4
R$* CC $* $| $* < @ $+.$+ > $*	$: $3 < @ $4.$5 . > $6
R$* CC $* $| $*			$: $3
# pass to name server to make hostname canonical
R$* $| $* < @ $* > $*		$: $2 < @ $[ $3 $] > $4
R$* $| $*			$: $2

# local host aliases and pseudo-domains are always canonical
R$* < @ $=w > $*		$: $1 < @ $2 . > $3
R$* < @ $=M > $*		$: $1 < @ $2 . > $3
R$* < @ $* . . > $*		$1 < @ $2 . > $3


##################################################
###  Ruleset 4 -- Final Output Post-rewriting  ###
##################################################
Sfinal=4

R$+ :; <@>		$@ $1 :				handle <list:;>
R$* <@>			$@				handle <> and list:;

# strip trailing dot off possibly canonical name
R$* < @ $+ . > $*	$1 < @ $2 > $3

# eliminate internal code
R$* < @ *LOCAL* > $*	$1 < @ $j > $2

# externalize local domain info
R$* < $+ > $*		$1 $2 $3			defocus
R@ $+ : @ $+ : $+	@ $1 , @ $2 : $3		<route-addr> canonical
R@ $*			$@ @ $1				... and exit

# UUCP must always be presented in old form
R$+ @ $- . UUCP		$2!$1				[u@h.UUCP](mailto:u@h.UUCP) => h!u

# delete duplicate local names
R$+ % $=w @ $=w		$1 @ $2				u%host@host => u@host



##############################################################
###   Ruleset 97 -- recanonicalize and call ruleset zero   ###
###		   (used for recursive calls)		   ###
##############################################################

SRecurse=97
R$*			$: $>canonify $1
R$*			$@ $>parse $1


######################################
###   Ruleset 0 -- Parse Address   ###
######################################

Sparse=0

R$*			$: $>Parse0 $1		initial parsing
R<@>			$#local $: <@>		special case error msgs
R$*			$: $>ParseLocal $1	handle local hacks
R$*			$: $>Parse1 $1		final parsing

#
#  Parse0 -- do initial syntax checking and eliminate local addresses.
#	This should either return with the (possibly modified) input
#	or return with a #error mailer.  It should not return with a
#	#mailer other than the #error mailer.
#

SParse0
R<@>			$@ <@>			special case error msgs
R$* : $* ; <@>		$#error $@ 5.1.3 $: "553 List:; syntax illegal for recipient addresses"
R@ <@ $* >		< @ $1 >		catch "@@host" bogosity
R<@ $+>			$#error $@ 5.1.3 $: "553 User address required"
R$+ <@>			$#error $@ 5.1.3 $: "553 Hostname required"
R$*			$: <> $1
R<> $* < @ [ $* ] : $+ > $*	$1 < @ [ $2 ] : $3 > $4
R<> $* < @ [ $* ] , $+ > $*	$1 < @ [ $2 ] , $3 > $4
R<> $* < @ [ $* ] $+ > $*	$#error $@ 5.1.2 $: "553 Invalid address"
R<> $* < @ [ $+ ] > $*		$1 < @ [ $2 ] > $3
R<> $* <$* : $* > $*	$#error $@ 5.1.3 $: "553 Colon illegal in host name part"
R<> $*			$1
R$* < @ . $* > $*	$#error $@ 5.1.2 $: "553 Invalid host name"
R$* < @ $* .. $* > $*	$#error $@ 5.1.2 $: "553 Invalid host name"
R$* < @ $* @ > $*	$#error $@ 5.1.2 $: "553 Invalid route address"
R$* @ $* < @ $* > $*	$#error $@ 5.1.3 $: "553 Invalid route address"
R$* , $~O $*		$#error $@ 5.1.3 $: "553 Invalid route address"


# now delete the local info -- note $=O to find characters that cause forwarding
R$* < @ > $*		$@ $>Parse0 $>canonify $1	user@ => user
R< @ $=w . > : $*	$@ $>Parse0 $>canonify $2	@here:... -> ...
R$- < @ $=w . >		$: $(dequote $1 $) < @ $2 . >	dequote "foo"@here
R< @ $+ >		$#error $@ 5.1.3 $: "553 User address required"
R$* $=O $* < @ $=w . >	$@ $>Parse0 $>canonify $1 $2 $3	...@here -> ...
R$- 			$: $(dequote $1 $) < @ *LOCAL* >	dequote "foo"
R< @ *LOCAL* >		$#error $@ 5.1.3 $: "553 User address required"
R$* $=O $* < @ *LOCAL* >
$@ $>Parse0 $>canonify $1 $2 $3	...@*LOCAL* -> ...
R$* < @ *LOCAL* >	$: $1


#
#  Parse1 -- the bottom half of ruleset 0.
#

SParse1

# handle numeric address spec
R$* < @ [ $+ ] > $*	$: $>ParseLocal $1 < @ [ $2 ] > $3	numeric internet spec
R$* < @ [ $+ ] > $*	$: $1 < @ [ $2 ] : $S > $3	Add smart host to path
R$* < @ [ $+ ] : > $*		$#esmtp $@ [$2] $: $1 < @ [$2] > $3	no smarthost: send
R$* < @ [ $+ ] : $- : $*> $*	$#$3 $@ $4 $: $1 < @ [$2] > $5	smarthost with mailer
R$* < @ [ $+ ] : $+ > $*	$#esmtp $@ $3 $: $1 < @ [$2] > $4	smarthost without mailer


# short circuit local delivery so forwarded email works


R$=L < @ $=w . >	$#local $: @ $1			special local names
R$+ < @ $=w . >		$#local $: $1			regular local name


# resolve remotely connected UUCP links (if any)

# resolve fake top level domains by forwarding to other hosts



# pass names that still have a host to a smarthost (if defined)
R$* < @ $* > $*		$: $>MailerToTriple < $S > $1 < @ $2 > $3	glue on smarthost name

# deal with other remote names
R$* < @$* > $*		$#esmtp $@ $2 $: $1 < @ $2 > $3	[user@host.domain](mailto:user@host.domain)

# handle locally delivered names
R$=L			$#local $: @ $1		special local names
R$+			$#local $: $1			regular local names



###########################################################################
###   Ruleset 5 -- special rewriting after aliases have been expanded   ###
###########################################################################

SLocal_localaddr
Slocaladdr=5
R$+			$: $1 $| $>"Local_localaddr" $1
R$+ $| $#ok		$@ $1			no change
R$+ $| $#$*		$#$2
R$+ $| $*		$: $1




# deal with plussed users so aliases work nicely
R$+ + *			$#local $@ $&h $: $1
R$+ + $*		$#local $@ + $2 $: $1 + *

# prepend an empty "forward host" on the front
R$+			$: <> $1



R< > $+			$: < > < $1 <> $&h >		nope, restore +detail

R< > < $+ <> + $* >	$: < > < $1 + $2 >		check whether +detail
R< > < $+ <> $* >	$: < > < $1 >			else discard
R< > < $+ + $* > $*	   < > < $1 > + $2 $3		find the user part
R< > < $+ > + $*	$#local $@ $2 $: @ $1		strip the extra +
R< > < $+ >		$@ $1				no +detail
R$+			$: $1 <> $&h			add +detail back in

R$+ <> + $*		$: $1 + $2			check whether +detail
R$+ <> $*		$: $1				else discard
R< local : $* > $*	$: $>MailerToTriple < local : $1 > $2	no host extension
R< error : $* > $*	$: $>MailerToTriple < error : $1 > $2	no host extension

R< $~[ : $+ > $+	$: $>MailerToTriple < $1 : $2 > $3 < @ $2 >

R< $+ > $+		$@ $>MailerToTriple < $1 > $2 < @ $1 >


###################################################################
###  Ruleset 95 -- canonify mailer:[user@]host syntax to triple	###
###################################################################

SMailerToTriple=95
R< > $*				$@ $1			strip off null relay
R< error : $-.$-.$- : $+ > $* 	$#error $@ $1.$2.$3 $: $4
R< error : $- : $+ > $*		$#error $@ $(dequote $1 $) $: $2
R< error : $+ > $*		$#error $: $1
R< local : $* > $*		$>CanonLocal < $1 > $2
R< $~[ : $+ @ $+ > $*<$*>$*	$# $1 $@ $3 $: $2<@$3>	use literal user
R< $~[ : $+ > $*		$# $1 $@ $2 $: $3	try qualified mailer
R< $=w > $*			$@ $2			delete local host
R< $+ > $*			$#relay $@ $1 $: $2	use unqualified mailer

###################################################################
###  Ruleset CanonLocal -- canonify local: syntax		###
###################################################################

SCanonLocal
# strip local host from routed addresses
R< $* > < @ $+ > : $+		$@ $>Recurse $3
R< $* > $+ $=O $+ < @ $+ >	$@ $>Recurse $2 $3 $4

# strip trailing dot from any host name that may appear
R< $* > $* < @ $* . >		$: < $1 > $2 < @ $3 >

# handle local: syntax -- use old user, either with or without host
R< > $* < @ $* > $*		$#local $@ $1@$2 $: $1
R< > $+				$#local $@ $1    $: $1

# handle local:user@host syntax -- ignore host part
R< $+ @ $+ > $* < @ $* >	$: < $1 > $3 < @ $4 >

# handle local:user syntax
R< $+ > $* <@ $* > $*		$#local $@ $2@$3 $: $1
R< $+ > $* 			$#local $@ $2    $: $1

###################################################################
###  Ruleset 93 -- convert header names to masqueraded form	###
###################################################################

SMasqHdr=93


# do not masquerade anything in class N
R$* < @ $* $=N . >	$@ $1 < @ $2 $3 . >

R$* < @ *LOCAL* >	$@ $1 < @ $j . >

###################################################################
###  Ruleset 94 -- convert envelope names to masqueraded form	###
###################################################################

SMasqEnv=94
R$* < @ *LOCAL* > $*	$: $1 < @ $j . > $2

###################################################################
###  Ruleset 98 -- local part of ruleset zero (can be null)	###
###################################################################

SParseLocal=98





######################################################################
###  D: LookUpDomain -- search for domain in access database
###
###	Parameters:
###		<$1> -- key (domain name)
###		<$2> -- default (what to return if not found in db)
###		<$3> -- mark (must be <(!|+) single-token>)
###			! does lookup only with tag
###			+ does lookup with and without tag
###		<$4> -- passthru (additional data passed unchanged through)
######################################################################

SD
R<$*> <$+> <$- $-> <$*>		$: < $(access $4:$1 $: ? $) > <$1> <$2> <$3 $4> <$5>
R<?> <$+> <$+> <+ $-> <$*>	$: < $(access $1 $: ? $) > <$1> <$2> <+ $3> <$4>
R<SKIP> <$+> <$+> <$- $-> <$*>	$@ <$2> <$5>
R<?> <[$+.$-]> <$+> <$- $-> <$*>	$@ $>D <[$1]> <$3> <$4 $5> <$6>
R<?> <[$+::$-]> <$+> <$- $-> <$*>	$: $>D <[$1]> <$3> <$4 $5> <$6>
R<?> <[$+:$-]> <$+> <$- $-> <$*>	$: $>D <[$1]> <$3> <$4 $5> <$6>
R<?> <$+.$+> <$+> <$- $-> <$*>	$@ $>D <$2> <$3> <$4 $5> <$6>
R<?> <$+> <$+> <$- $-> <$*>	$@ <$2> <$5>
R<$* <TMPF>> <$+> <$+> <$- $-> <$*>	$@ <<TMPF>> <$6>
R<$*> <$+> <$+> <$- $-> <$*>	$@ <$1> <$6>

######################################################################
###  A: LookUpAddress -- search for host address in access database
###
###	Parameters:
###		<$1> -- key (dot quadded host address)
###		<$2> -- default (what to return if not found in db)
###		<$3> -- mark (must be <(!|+) single-token>)
###			! does lookup only with tag
###			+ does lookup with and without tag
###		<$4> -- passthru (additional data passed through)
######################################################################

SA
R<$+> <$+> <$- $-> <$*>		$: < $(access $4:$1 $: ? $) > <$1> <$2> <$3 $4> <$5>
R<?> <$+> <$+> <+ $-> <$*>	$: < $(access $1 $: ? $) > <$1> <$2> <+ $3> <$4>
R<SKIP> <$+> <$+> <$- $-> <$*>	$@ <$2> <$5>
R<?> <$+::$-> <$+> <$- $-> <$*>		$@ $>A <$1> <$3> <$4 $5> <$6>
R<?> <$+:$-> <$+> <$- $-> <$*>		$@ $>A <$1> <$3> <$4 $5> <$6>
R<?> <$+.$-> <$+> <$- $-> <$*>		$@ $>A <$1> <$3> <$4 $5> <$6>
R<?> <$+> <$+> <$- $-> <$*>	$@ <$2> <$5>
R<$* <TMPF>> <$+> <$+> <$- $-> <$*>	$@ <<TMPF>> <$6>
R<$*> <$+> <$+> <$- $-> <$*>	$@ <$1> <$6>

######################################################################
###  CanonAddr --	Convert an address into a standard form for
###			relay checking.  Route address syntax is
###			crudely converted into a %-hack address.
###
###	Parameters:
###		$1 -- full recipient address
###
###	Returns:
###		parsed address, not in source route form
######################################################################

SCanonAddr
R$*			$: $>Parse0 $>canonify $1	make domain canonical


######################################################################
###  ParseRecipient --	Strip off hosts in $=R as well as possibly
###			$* $=m or the access database.
###			Check user portion for host separators.
###
###	Parameters:
###		$1 -- full recipient address
###
###	Returns:
###		parsed, non-local-relaying address
######################################################################

SParseRecipient
R$*				$: <?> $>CanonAddr $1
R<?> $* < @ $* . >		<?> $1 < @ $2 >			strip trailing dots
R<?> $- < @ $* >		$: <?> $(dequote $1 $) < @ $2 >	dequote local part

# if no $=O character, no host in the user portion, we are done
R<?> $* $=O $* < @ $* >		$: <NO> $1 $2 $3 < @ $4>
R<?> $*				$@ $1


R<NO> $* < @ $* $=R >		$: <RELAY> $1 < @ $2 $3 >
R<NO> $* < @ $+ >		$: $>D <$2> <NO> <+ To> <$1 < @ $2 >>
R<$+> <$+>			$: <$1> $2



R<RELAY> $* < @ $* >		$@ $>ParseRecipient $1
R<$+> $*			$@ $2


######################################################################
###  check_relay -- check hostname/address on SMTP startup
######################################################################

Scheck_relay
R$*		$: $>"RateControl" dummy
R$*		$: $>"ConnControl" dummy

SLocal_check_relay
Scheckrelay
R$*			$: $1 $| $>"Local_check_relay" $1
R$* $| $* $| $#$*	$#$3
R$* $| $* $| $*		$@ $>"Basic_check_relay" $1 $| $2

SBasic_check_relay
# check for deferred delivery mode
R$*			$: < $&{deliveryMode} > $1
R< d > $*		$@ deferred
R< $* > $*		$: $2

R$+ $| $+		$: $>D < $1 > <?> <+ Connect> < $2 >
R   $| $+		$: $>A < $1 > <?> <+ Connect> <>	empty client_name
R<?> <$+>		$: $>A < $1 > <?> <+ Connect> <>	no: another lookup
R<?> <$*>		$: OK				found nothing
R<$={Accept}> <$*>	$@ $1				return value of lookup
R<REJECT> <$*>		$#error $@ 5.7.1 $: "550 Access denied"
R<DISCARD> <$*>		$#discard $: discard
R<QUARANTINE:$+> <$*>	$#error $@ quarantine $: $1
R<ERROR:$-.$-.$-:$+> <$*>	$#error $@ $1.$2.$3 $: $4
R<ERROR:$+> <$*>		$#error $: $1
R<$* <TMPF>> <$*>		$#error $@ 4.3.0 $: "451 Temporary system failure. Please try again later."
R<$+> <$*>		$#error $: $1




######################################################################
###  check_mail -- check SMTP `MAIL FROM:' command argument
######################################################################

SLocal_check_mail
Scheckmail
R$*			$: $1 $| $>"Local_check_mail" $1
R$* $| $#$*		$#$2
R$* $| $*		$@ $>"Basic_check_mail" $1

SBasic_check_mail
# check for deferred delivery mode
R$*			$: < $&{deliveryMode} > $1
R< d > $*		$@ deferred
R< $* > $*		$: $2

# authenticated?
R$*			$: $1 $| $>"tls_client" $&{verify} $| MAIL
R$* $| $#$+		$#$2
R$* $| $*		$: $1

R<>			$@ <OK>			we MUST accept <> (RFC 1123)
R$+			$: <?> $1
R<?><$+>		$: <@> <$1>
R<?>$+			$: <@> <$1>
R$*			$: $&{daemon_flags} $| $1
R$* f $* $| <@> < $* @ $- >	$: < ? $&{client_name} > < $3 @ $4 >
R$* u $* $| <@> < $* >	$: <?> < $3 >
R$* $| $*		$: $2
# handle case of @localhost on address
R<@> < $* @ localhost >	$: < ? $&{client_name} > < $1 @ localhost >
R<@> < $* @ [127.0.0.1] >
$: < ? $&{client_name} > < $1 @ [127.0.0.1] >
R<@> < $* @ [IPv6:0:0:0:0:0:0:0:1] >
$: < ? $&{client_name} > < $1 @ [IPv6:0:0:0:0:0:0:0:1] >
R<@> < $* @ [IPv6:::1] >
$: < ? $&{client_name} > < $1 @ [IPv6:::1] >
R<@> < $* @ localhost.$m >
$: < ? $&{client_name} > < $1 @ localhost.$m >
R<@> < $* @ localhost.UUCP >
$: < ? $&{client_name} > < $1 @ localhost.UUCP >
R<@> $*			$: $1			no localhost as domain
R<? $=w> $*		$: $2			local client: ok
R<? $+> <$+>		$#error $@ 5.5.4 $: "553 Real domain name required for sender address"
R<?> $*			$: $1
R$*			$: <?> $>CanonAddr $1		canonify sender address and mark it
R<?> $* < @ $+ . >	<?> $1 < @ $2 >			strip trailing dots
# handle non-DNS hostnames (*.bitnet, *.decnet, *.uucp, etc)
R<?> $* < @ $* $=P >	$: <OKR> $1 < @ $2 $3 >
R<?> $* < @ $j >	$: <OKR> $1 < @ $j >
R<?> $* < @ $+ >	$: <? $(resolve $2 $: $2 <PERM> $) > $1 < @ $2 >
R<? $* <$->> $* < @ $+ >
$: <$2> $3 < @ $4 >

# check sender address: user@address, user@, address
R<$+> $+ < @ $* >	$: @<$1> <$2 < @ $3 >> $| <F:$2@$3> <U:$2@> <D:$3>
R<$+> $+		$: @<$1> <$2> $| <U:$2@>
R@ <$+> <$*> $| <$+>	$: <@> <$1> <$2> $| $>SearchList <+ From> $| <$3> <>
R<@> <$+> <$*> $| <$*>	$: <$3> <$1> <$2>		reverse result
# retransform for further use
R<?> <$+> <$*>		$: <$1> $2	no match
R<$+> <$+> <$*>		$: <$1> $3	relevant result, keep it

# handle case of no @domain on address
R<?> $*			$: $&{daemon_flags} $| <?> $1
R$* u $* $| <?> $*	$: <OKR> $3
R$* $| $*		$: $2
R<?> $*			$: < ? $&{client_addr} > $1
R<?> $*			$@ <OKR>			...local unqualed ok
R<? $+> $*		$#error $@ 5.5.4 $: "553 Domain name required for sender address " $&f
...remote is not
# check results
R<?> $*			$: @ $1		mark address: nothing known about it
R<$={ResOk}> $*		$: @ $2		domain ok
R<TEMP> $*		$#error $@ 4.1.8 $: "451 Domain of sender address " $&f " does not resolve"
R<PERM> $*		$#error $@ 5.1.8 $: "553 Domain of sender address " $&f " does not exist"
R<$={Accept}> $*	$# $1		accept from access map
R<DISCARD> $*		$#discard $: discard
R<QUARANTINE:$+> $*	$#error $@ quarantine $: $1
R<REJECT> $*		$#error $@ 5.7.1 $: "550 Access denied"
R<ERROR:$-.$-.$-:$+> $*		$#error $@ $1.$2.$3 $: $4
R<ERROR:$+> $*		$#error $: $1
R<<TMPF>> $*		$#error $@ 4.3.0 $: "451 Temporary system failure. Please try again later."
R<$+> $*		$#error $: $1		error from access db



######################################################################
###  check_rcpt -- check SMTP `RCPT TO:' command argument
######################################################################

SLocal_check_rcpt
Scheckrcpt
R$*			$: $1 $| $>"Local_check_rcpt" $1
R$* $| $#$*		$#$2
R$* $| $*		$@ $>"Basic_check_rcpt" $1

SBasic_check_rcpt
# empty address?
R<>			$#error $@ nouser $: "553 User address required"
R$@			$#error $@ nouser $: "553 User address required"
# check for deferred delivery mode
R$*			$: < $&{deliveryMode} > $1
R< d > $*		$@ deferred
R< $* > $*		$: $2


######################################################################
R$*			$: $1 $| @ $>"Rcpt_ok" $1
R$* $| @ $#TEMP $+	$: $1 $| T $2
R$* $| @ $#$*		$#$2
R$* $| @ RELAY		$@ RELAY
R$* $| @ $*		$: O $| $>"Relay_ok" $1
R$* $| T $+		$: T $2 $| $>"Relay_ok" $1
R$* $| $#TEMP $+	$#error $2
R$* $| $#$*		$#$2
R$* $| RELAY		$@ RELAY
R T $+ $| $*		$#error $1
# anything else is bogus
R$*			$#error $@ 5.7.1 $: "550 Relaying denied"


######################################################################
### Rcpt_ok: is the recipient ok?
######################################################################
SRcpt_ok
R$*			$: $>ParseRecipient $1		strip relayable hosts




# authenticated via TLS?
R$*			$: $1 $| $>RelayTLS	client authenticated?
R$* $| $# $+		$# $2			error/ok?
R$* $| $*		$: $1			no

R$*			$: $1 $| $>"Local_Relay_Auth" $&{auth_type}
R$* $| $# $*		$# $2
R$* $| NO		$: $1
R$* $| $*		$: $1 $| $&{auth_type}
R$* $|			$: $1
R$* $| $={TrustAuthMech}	$# RELAY
R$* $| $*		$: $1
# anything terminating locally is ok
R$+ < @ $=w >		$@ RELAY
R$+ < @ $* $=R >	$@ RELAY
R$+ < @ $+ >		$: $>D <$2> <?> <+ To> <$1 < @ $2 >>
R<RELAY> $*		$@ RELAY
R<$* <TMPF>> $*		$#TEMP $@ 4.3.0 $: "451 Temporary system failure. Please try again later."
R<$*> <$*>		$: $2



# check for local user (i.e. unqualified address)
R$*			$: <?> $1
R<?> $* < @ $+ >	$: <REMOTE> $1 < @ $2 >
# local user is ok
R<?> $+			$@ RELAY
R<$+> $*		$: $2

######################################################################
### Relay_ok: is the relay/sender ok?
######################################################################
SRelay_ok
# anything originating locally is ok
# check IP address
R$*			$: $&{client_addr}
R$@			$@ RELAY		originated locally
R0			$@ RELAY		originated locally
R127.0.0.1		$@ RELAY		originated locally
RIPv6:0:0:0:0:0:0:0:1	$@ RELAY		originated locally
RIPv6:::1		$@ RELAY		originated locally
R$=R $*			$@ RELAY		relayable IP address
R$*			$: $>A <$1> <?> <+ Connect> <$1>
R<RELAY> $* 		$@ RELAY		relayable IP address

R<<TMPF>> $*		$#TEMP $@ 4.3.0 $: "451 Temporary system failure. Please try again later."
R<$*> <$*>		$: $2
R$*			$: [ $1 ]		put brackets around it...
R$=w			$@ RELAY		... and see if it is local


# check client name: first: did it resolve?
R$*			$: < $&{client_resolve} >
R<TEMP>			$#TEMP $@ 4.4.0 $: "450 Relaying temporarily denied. Cannot resolve PTR record for " $&{client_addr}
R<FORGED>		$#error $@ 5.7.1 $: "550 Relaying denied. IP name possibly forged " $&{client_name}
R<FAIL>			$#error $@ 5.7.1 $: "550 Relaying denied. IP name lookup failed " $&{client_name}
R$*			$: <@> $&{client_name}
# pass to name server to make hostname canonical
R<@> $* $=P 		$:<?>  $1 $2
R<@> $+			$:<?>  $[ $1 $]
R$* .			$1			strip trailing dots
R<?> $=w		$@ RELAY
R<?> $* $=R			$@ RELAY
R<?> $*			$: $>D <$1> <?> <+ Connect> <$1>
R<RELAY> $*		$@ RELAY
R<$* <TMPF>> $*		$#TEMP $@ 4.3.0 $: "451 Temporary system failure. Please try again later."
R<$*> <$*>		$: $2

# turn a canonical address in the form user<@domain>
# qualify unqual. addresses with $j
SFullAddr
R$* <@ $+ . >		$1 <@ $2 >
R$* <@ $* >		$@ $1 <@ $2 >
R$+			$@ $1 <@ $j >

SDelay_TLS_Clt
# authenticated?
R$*			$: $1 $| $>"tls_client" $&{verify} $| MAIL
R$* $| $#$+		$#$2
R$* $| $*		$# $1
R$*			$# $1

SDelay_TLS_Clt2
# authenticated?
R$*			$: $1 $| $>"tls_client" $&{verify} $| MAIL
R$* $| $#$+		$#$2
R$* $| $*		$@ $1
R$*			$@ $1

# call all necessary rulesets
Scheck_rcpt
# R$@			$#error $@ 5.1.3 $: "553 Recipient address required"

R$+			$: $1 $| $>checkrcpt $1
R$+ $| $#error $*	$#error $2
R$+ $| $#discard $*	$#discard $2
R$+ $| $#$*		$@ $>"Delay_TLS_Clt" $2
R$+ $| $*		$: <?> $>FullAddr $>CanonAddr $1
R<?> $+ < @ $=w >	$: <> $1 < @ $2 > $| <F: $1@$2 > <D: $2 > <U: $1@>
R<?> $+ < @ $* >	$: <> $1 < @ $2 > $| <F: $1@$2 > <D: $2 >
# lookup the addresses only with Spam tag
R<> $* $| <$+>		$: <@> $1 $| $>SearchList <! Spam> $| <$2> <>
R<@> $* $| $*		$: $2 $1		reverse result
# is the recipient a spam friend?
R<FRIEND> $+		$@ $>"Delay_TLS_Clt2" SPAMFRIEND
R<$*> $+		$: $2

R$*			$: $1 $| $>checkmail <$&f>
R$* $| $#$*		$#$2
R$* $| $*		$: $1 $| $>checkrelay $&{client_name} $| $&{client_addr}
R$* $| $#$*		$#$2
R$* $| $*		$: $1



######################################################################
###  F: LookUpFull -- search for an entry in access database
###
###	lookup of full key (which should be an address) and
###	variations if +detail exists: +* and without +detail
###
###	Parameters:
###		<$1> -- key
###		<$2> -- default (what to return if not found in db)
###		<$3> -- mark (must be <(!|+) single-token>)
###			! does lookup only with tag
###			+ does lookup with and without tag
###		<$4> -- passthru (additional data passed unchanged through)
######################################################################

SF
R<$+> <$*> <$- $-> <$*>		$: <$(access $4:$1 $: ? $)> <$1> <$2> <$3 $4> <$5>
R<?> <$+> <$*> <+ $-> <$*>	$: <$(access $1 $: ? $)> <$1> <$2> <+ $3> <$4>
R<?> <$+ + $* @ $+> <$*> <$- $-> <$*>
$: <$(access $6:$1+*@$3 $: ? $)> <$1+$2@$3> <$4> <$5 $6> <$7>
R<?> <$+ + $* @ $+> <$*> <+ $-> <$*>
$: <$(access $1+*@$3 $: ? $)> <$1+$2@$3> <$4> <+ $5> <$6>
R<?> <$+ + $* @ $+> <$*> <$- $-> <$*>
$: <$(access $6:$1@$3 $: ? $)> <$1+$2@$3> <$4> <$5 $6> <$7>
R<?> <$+ + $* @ $+> <$*> <+ $-> <$*>
$: <$(access $1@$3 $: ? $)> <$1+$2@$3> <$4> <+ $5> <$6>
R<?> <$+> <$*> <$- $-> <$*>	$@ <$2> <$5>
R<$+ <TMPF>> <$*> <$- $-> <$*>	$@ <<TMPF>> <$5>
R<$+> <$*> <$- $-> <$*>		$@ <$1> <$5>

######################################################################
###  E: LookUpExact -- search for an entry in access database
###
###	Parameters:
###		<$1> -- key
###		<$2> -- default (what to return if not found in db)
###		<$3> -- mark (must be <(!|+) single-token>)
###			! does lookup only with tag
###			+ does lookup with and without tag
###		<$4> -- passthru (additional data passed unchanged through)
######################################################################

SE
R<$*> <$*> <$- $-> <$*>		$: <$(access $4:$1 $: ? $)> <$1> <$2> <$3 $4> <$5>
R<?> <$+> <$*> <+ $-> <$*>	$: <$(access $1 $: ? $)> <$1> <$2> <+ $3> <$4>
R<?> <$+> <$*> <$- $-> <$*>	$@ <$2> <$5>
R<$+ <TMPF>> <$*> <$- $-> <$*>	$@ <<TMPF>> <$5>
R<$+> <$*> <$- $-> <$*>		$@ <$1> <$5>

######################################################################
###  U: LookUpUser -- search for an entry in access database
###
###	lookup of key (which should be a local part) and
###	variations if +detail exists: +* and without +detail
###
###	Parameters:
###		<$1> -- key (user@)
###		<$2> -- default (what to return if not found in db)
###		<$3> -- mark (must be <(!|+) single-token>)
###			! does lookup only with tag
###			+ does lookup with and without tag
###		<$4> -- passthru (additional data passed unchanged through)
######################################################################

SU
R<$+> <$*> <$- $-> <$*>		$: <$(access $4:$1 $: ? $)> <$1> <$2> <$3 $4> <$5>
R<?> <$+> <$*> <+ $-> <$*>	$: <$(access $1 $: ? $)> <$1> <$2> <+ $3> <$4>
R<?> <$+ + $* @> <$*> <$- $-> <$*>
$: <$(access $5:$1+*@ $: ? $)> <$1+$2@> <$3> <$4 $5> <$6>
R<?> <$+ + $* @> <$*> <+ $-> <$*>
$: <$(access $1+*@ $: ? $)> <$1+$2@> <$3> <+ $4> <$5>
R<?> <$+ + $* @> <$*> <$- $-> <$*>
$: <$(access $5:$1@ $: ? $)> <$1+$2@> <$3> <$4 $5> <$6>
R<?> <$+ + $* @> <$*> <+ $-> <$*>
$: <$(access $1@ $: ? $)> <$1+$2@> <$3> <+ $4> <$5>
R<?> <$+> <$*> <$- $-> <$*>	$@ <$2> <$5>
R<$+ <TMPF>> <$*> <$- $-> <$*>	$@ <<TMPF>> <$5>
R<$+> <$*> <$- $-> <$*>		$@ <$1> <$5>

######################################################################
###  SearchList: search a list of items in the access map
###	Parameters:
###		<exact tag> $| <mark:address> <mark:address> ... <>
###	where "exact" is either "+" or "!":
###	<+ TAG>	lookup with and w/o tag
###	<! TAG>	lookup with tag
###	possible values for "mark" are:
###		D: recursive host lookup (LookUpDomain)
###		E: exact lookup, no modifications
###		F: full lookup, try user+ext@domain and user@domain
###		U: user lookup, try user+ext and user (input must have trailing @)
###	return: <RHS of lookup> or <?> (not found)
######################################################################

# class with valid marks for SearchList
C{Src}E F D U A
SSearchList
# just call the ruleset with the name of the tag... nice trick...
R<$+> $| <$={Src}:$*> <$*>	$: <$1> $| <$4> $| $>$2 <$3> <?> <$1> <>
R<$+> $| <> $| <?> <>		$@ <?>
R<$+> $| <$+> $| <?> <>		$@ $>SearchList <$1> $| <$2>
R<$+> $| <$*> $| <$+> <>	$@ <$3>
R<$+> $| <$+>			$@ <$2>


######################################################################
###  trust_auth: is user trusted to authenticate as someone else?
###
###	Parameters:
###		$1: AUTH= parameter from MAIL command
######################################################################

SLocal_trust_auth
Strust_auth
R$*			$: $&{auth_type} $| $1
# required by RFC 2554 section 4.
R$@ $| $*		$#error $@ 5.7.1 $: "550 not authenticated"
R$* $| $&{auth_authen}		$@ identical
R$* $| <$&{auth_authen}>	$@ identical
R$* $| $*		$: $1 $| $>"Local_trust_auth" $2
R$* $| $#$*		$#$2
R$*			$#error $@ 5.7.1 $: "550 " $&{auth_authen} " not allowed to act as " $&{auth_author}

######################################################################
###  Relay_Auth: allow relaying based on authentication?
###
###	Parameters:
###		$1: ${auth_type}
######################################################################
SLocal_Relay_Auth

######################################################################
###  srv_features: which features to offer to a client?
###	(done in server)
######################################################################
Ssrv_features
R$*		$: $>D <$&{client_name}> <?> <! "Srv_Features"> <>
R<?>$*		$: $>A <$&{client_addr}> <?> <! "Srv_Features"> <>
R<?>$*		$: <$(access "Srv_Features": $: ? $)>
R<?>$*		$@ OK
R<$* <TMPF>>$*	$#temp
R<$+>$*		$# $1

######################################################################
###  try_tls: try to use STARTTLS?
###	(done in client)
######################################################################
Stry_tls
R$*		$: $>D <$&{server_name}> <?> <! "Try_TLS"> <>
R<?>$*		$: $>A <$&{server_addr}> <?> <! "Try_TLS"> <>
R<?>$*		$: <$(access "Try_TLS": $: ? $)>
R<?>$*		$@ OK
R<$* <TMPF>>$*	$#error $@ 4.3.0 $: "451 Temporary system failure. Please try again later."
R<NO>$*		$#error $@ 5.7.1 $: "550 do not try TLS with " $&{server_name} " ["$&{server_addr}"]"

######################################################################
###  tls_rcpt: is connection with server "good" enough?
###	(done in client, per recipient)
###
###	Parameters:
###		$1: recipient
######################################################################
Stls_rcpt
R$*			$: $(macro {TLS_Name} $@ $&{server_name} $) $1
R$+			$: <?> $>CanonAddr $1
R<?> $+ < @ $+ . >	<?> $1 <@ $2 >
R<?> $+ < @ $+ >	$: $1 <@ $2 > $| <F:$1@$2> <U:$1@> <D:$2> <E:>
R<?> $+			$: $1 $| <U:$1@> <E:>
R$* $| $+	$: $1 $| $>SearchList <! "TLS_Rcpt"> $| $2 <>
R$* $| <?>	$@ OK
R$* $| <$* <TMPF>>	$#error $@ 4.3.0 $: "451 Temporary system failure. Please try again later."
R$* $| <$+>	$@ $>"TLS_connection" $&{verify} $| <$2>

######################################################################
###  tls_client: is connection with client "good" enough?
###	(done in server)
###
###	Parameters:
###		${verify} $| (MAIL|STARTTLS)
######################################################################
Stls_client
R$*		$: $(macro {TLS_Name} $@ $&{client_name} $) $1
R$* $| $*	$: $1 $| $>D <$&{client_name}> <?> <! "TLS_Clt"> <>
R$* $| <?>$*	$: $1 $| $>A <$&{client_addr}> <?> <! "TLS_Clt"> <>
R$* $| <?>$*	$: $1 $| <$(access "TLS_Clt": $: ? $)>
R$* $| <$* <TMPF>>	$#error $@ 4.3.0 $: "451 Temporary system failure. Please try again later."
R$*		$@ $>"TLS_connection" $1

######################################################################
###  tls_server: is connection with server "good" enough?
###	(done in client)
###
###	Parameter:
###		${verify}
######################################################################
Stls_server
R$*		$: $(macro {TLS_Name} $@ $&{server_name} $) $1
R$*		$: $1 $| $>D <$&{server_name}> <?> <! "TLS_Srv"> <>
R$* $| <?>$*	$: $1 $| $>A <$&{server_addr}> <?> <! "TLS_Srv"> <>
R$* $| <?>$*	$: $1 $| <$(access "TLS_Srv": $: ? $)>
R$* $| <$* <TMPF>>	$#error $@ 4.3.0 $: "451 Temporary system failure. Please try again later."
R$*		$@ $>"TLS_connection" $1

######################################################################
###  TLS_connection: is TLS connection "good" enough?
###
###	Parameters:
###		${verify} $| <Requirement> [<>]
###		Requirement: RHS from access map, may be ? for none.
######################################################################
STLS_connection
R$* $| <$*>$*			$: $1 $| <$2>
# create the appropriate error codes
R$* $| <PERM + $={Tls} $*>	$: $1 $| <503:5.7.0> <$2 $3>
R$* $| <TEMP + $={Tls} $*>	$: $1 $| <403:4.7.0> <$2 $3>
R$* $| <$={Tls} $*>		$: $1 $| <403:4.7.0> <$2 $3>
# deal with TLS handshake failures: abort
RSOFTWARE $| <$-:$+> $* 	$#error $@ $2 $: $1 " TLS handshake failed."
RSOFTWARE $| $* 		$#error $@ 4.7.0 $: "403 TLS handshake failed."
# deal with TLS protocol errors: abort
RPROTOCOL $| <$-:$+> $* 	$#error $@ $2 $: $1 " STARTTLS failed."
RPROTOCOL $| $* 		$#error $@ 4.7.0 $: "403 STARTTLS failed."
R$* $| <$*> <VERIFY>		$: <$2> <VERIFY> <> $1
R$* $| <$*> <VERIFY + $+>	$: <$2> <VERIFY> <$3> $1
R$* $| <$*> <$={Tls}:$->$*	$: <$2> <$3:$4> <> $1
R$* $| <$*> <$={Tls}:$- + $+>$*	$: <$2> <$3:$4> <$5> $1
R$* $| $*			$@ OK
# authentication required: give appropriate error
# other side did authenticate (via STARTTLS)
R<$*><VERIFY> <> OK		$@ OK
R<$*><VERIFY> <$+> OK		$: <$1> <REQ:0> <$2>
R<$*><VERIFY:$-> <$*> OK	$: <$1> <REQ:$2> <$3>
R<$*><ENCR:$-> <$*> $*		$: <$1> <REQ:$2> <$3>
R<$-:$+><VERIFY $*> <$*>	$#error $@ $2 $: $1 " authentication required"
R<$-:$+><VERIFY $*> <$*> FAIL	$#error $@ $2 $: $1 " authentication failed"
R<$-:$+><VERIFY $*> <$*> NO	$#error $@ $2 $: $1 " not authenticated"
R<$-:$+><VERIFY $*> <$*> NOT	$#error $@ $2 $: $1 " no authentication requested"
R<$-:$+><VERIFY $*> <$*> NONE	$#error $@ $2 $: $1 " other side does not support STARTTLS"
R<$-:$+><VERIFY $*> <$*> $+	$#error $@ $2 $: $1 " authentication failure " $4
R<$*><REQ:$-> <$*>		$: <$1> <REQ:$2> <$3> $>max $&{cipher_bits} : $&{auth_ssf}
R<$*><REQ:$-> <$*> $-		$: <$1> <$2:$4> <$3> $(arith l $@ $4 $@ $2 $)
R<$-:$+><$-:$-> <$*> TRUE	$#error $@ $2 $: $1 " encryption too weak " $4 " less than " $3
R<$-:$+><$-:$-> <$*> $*		$: <$1:$2 ++ $5>
R<$-:$+ ++ >			$@ OK
R<$-:$+ ++ $+ >			$: <$1:$2> <$3>
R<$-:$+> < $+ ++ $+ >		<$1:$2> <$3> <$4>
R<$-:$+> $+			$@ $>"TLS_req" $3 $| <$1:$2>

######################################################################
###  TLS_req: check additional TLS requirements
###
###	Parameters: [<list> <of> <req>] $| <$-:$+>
###		$-: SMTP reply code
###		$+: Enhanced Status Code
######################################################################
STLS_req
R $| $+		$@ OK
R<CN> $* $| <$+>		$: <CN:$&{TLS_Name}> $1 $| <$2>
R<CN:$&{cn_subject}> $* $| <$+>		$@ $>"TLS_req" $1 $| <$2>
R<CN:$+> $* $| <$-:$+>	$#error $@ $4 $: $3 " CN " $&{cn_subject} " does not match " $1
R<CS:$&{cert_subject}> $* $| <$+>	$@ $>"TLS_req" $1 $| <$2>
R<CS:$+> $* $| <$-:$+>	$#error $@ $4 $: $3 " Cert Subject " $&{cert_subject} " does not match " $1
R<CI:$&{cert_issuer}> $* $| <$+>	$@ $>"TLS_req" $1 $| <$2>
R<CI:$+> $* $| <$-:$+>	$#error $@ $4 $: $3 " Cert Issuer " $&{cert_issuer} " does not match " $1
ROK			$@ OK

######################################################################
###  max: return the maximum of two values separated by :
###
###	Parameters: [$-]:[$-]
######################################################################
Smax
R:		$: 0
R:$-		$: $1
R$-:		$: $1
R$-:$-		$: $(arith l $@ $1 $@ $2 $) : $1 : $2
RTRUE:$-:$-	$: $2
R$-:$-:$-	$: $2




######################################################################
###  RelayTLS: allow relaying based on TLS authentication
###
###	Parameters:
###		none
######################################################################
SRelayTLS
# authenticated?
R$*			$: <?> $&{verify}
R<?> OK			$: OK		authenticated: continue
R<?> $*			$@ NO		not authenticated
R$*			$: $&{cert_issuer}
R$+			$: $(access CERTISSUER:$1 $)
RRELAY			$# RELAY
RSUBJECT		$: <@> $&{cert_subject}
R<@> $+			$: <@> $(access CERTSUBJECT:$1 $)
R<@> RELAY		$# RELAY
R$*			$: NO

######################################################################
###  authinfo: lookup authinfo in the access map
###
###	Parameters:
###		$1: {server_name}
###		$2: {server_addr}
######################################################################
Sauthinfo
R$*		$: $1 $| $>D <$&{server_name}> <?> <! AuthInfo> <>
R$* $| <?>$*	$: $1 $| $>A <$&{server_addr}> <?> <! AuthInfo> <>
R$* $| <?>$*	$: $1 $| <$(access AuthInfo: $: ? $)> <>
R$* $| <?>$*	$@ no				no authinfo available
R$* $| <$*> <>	$# $2

######################################################################
###  RateControl: 
###	Parameters:	ignored
###	return: $#error or OK
######################################################################
SRateControl
R$*		$: <A:$&{client_addr}> <E:>
R$+		$: $>SearchList <! ClientRate> $| $1 <>
R<?>		$@ OK
R<$* <TMPF>>	$#error $@ 4.3.0 $: "451 Temporary system failure. Please try again later."
R<0>		$@ OK		no limit
R<$+>		$: <$1> $| $(arith l $@ $1 $@ $&{client_rate} $)
R<$+> $| TRUE	$#error $@ 4.3.2 $: 421 Connection rate limit exceeded.


######################################################################
###  ConnControl: 
###	Parameters:	ignored
###	return: $#error or OK
######################################################################
SConnControl
R$*		$: <A:$&{client_addr}> <E:>
R$+		$: $>SearchList <! ClientConn> $| $1 <>
R<?>		$@ OK
R<$* <TMPF>>	$#error $@ 4.3.0 $: "451 Temporary system failure. Please try again later."
R<0>		$@ OK		no limit
R<$+>		$: <$1> $| $(arith l $@ $1 $@ $&{client_connections} $)
R<$+> $| TRUE	$#error $@ 4.3.2 $: 421 Too many open connections.





######################################################################
###  greet_pause: lookup pause time before 220 greeting
###
###	Parameters:
###		$1: {client_name}
###		$2: {client_addr}
######################################################################
SLocal_greet_pause
Sgreet_pause
R$*			$: <$1><?> $| $>"Local_greet_pause" $1
R<$*><?> $| $#$*	$#$2
R<$*><?> $| $*		$: $1
R$+ $| $+		$: $>D < $1 > <?> <! GreetPause> < $2 >
R   $| $+		$: $>A < $1 > <?> <! GreetPause> <>	empty client_name
R<?> <$+>		$: $>A < $1 > <?> <! GreetPause> <>	no: another lookup
R<?> <$*>		$# 1000
R<$* <TMPF>> <$*>	$@
R<$+> <$*>		$# $1
#

######################################################################
######################################################################
#####
#####			MAIL FILTER DEFINITIONS
#####
######################################################################
######################################################################

#

######################################################################
######################################################################
#####
#####			MAILER DEFINITIONS
#####
######################################################################
######################################################################



##################################################
###   Local and Program Mailer specification   ###
##################################################

#####  $Id: local.m4,v 8.60 2013-11-22 20:51:14 ca Exp $  #####

#
#  Envelope sender rewriting
#
SEnvFromL
R<@>			$n			errors to mailer-daemon
R@ <@ $*>		$n			temporarily bypass Sun bogosity
R$+			$: $>AddDomain $1	add local domain if needed
R$*			$: $>MasqEnv $1		do masquerading

#
#  Envelope recipient rewriting
#
SEnvToL
R$+ < @ $* >		$: $1			strip host part
R$+ + $*		$: < $&{addr_type} > $1 + $2	mark with addr type
R<e s> $+ + $*		$: $1			remove +detail for sender
R< $* > $+		$: $2			else remove mark

#
#  Header sender rewriting
#
SHdrFromL
R<@>			$n			errors to mailer-daemon
R@ <@ $*>		$n			temporarily bypass Sun bogosity
R$+			$: $>AddDomain $1	add local domain if needed
R$*			$: $>MasqHdr $1		do masquerading

#
#  Header recipient rewriting
#
SHdrToL
R$+			$: $>AddDomain $1	add local domain if needed
R$* < @ *LOCAL* > $*	$: $1 < @ $j . > $2

#
#  Common code to add local domain name (only if always-add-domain)
#
SAddDomain

Mlocal,		P=/usr/sbin/sensible-mda, F=lsDFMAw5:/|@qPn9S, S=EnvFromL/HdrFromL, R=EnvToL/HdrToL,
T=DNS/RFC822/X-Unix,
A=sensible-mda $g $u $h ${client_addr}
Mprog,		P=/bin/sh, F=lsDFMoqeu9, S=EnvFromL/HdrFromL, R=EnvToL/HdrToL, D=$z:/,
T=X-Unix/X-Unix/X-Unix,
A=sh -c $u

#####################################
###   SMTP Mailer specification   ###
#####################################

#####  $Id: smtp.m4,v 8.66 2013-11-22 20:51:14 ca Exp $  #####

#
#  common sender and masquerading recipient rewriting
#
SMasqSMTP
R$* < @ $* > $*		$@ $1 < @ $2 > $3		already fully qualified
R$+			$@ $1 < @ *LOCAL* >		add local qualification

#
#  convert pseudo-domain addresses to real domain addresses
#
SPseudoToReal

# pass <route-addr>s through
R< @ $+ > $*		$@ < @ $1 > $2			resolve <route-addr>

# output fake domains as user%fake@relay

# do UUCP heuristics; note that these are shared with UUCP mailers
R$+ < @ $+ .UUCP. >	$: < $2 ! > $1			convert to UUCP form
R$+ < @ $* > $*		$@ $1 < @ $2 > $3		not UUCP form

# leave these in .UUCP form to avoid further tampering
R< $&h ! > $- ! $+	$@ $2 < @ $1 .UUCP. >
R< $&h ! > $-.$+ ! $+	$@ $3 < @ $1.$2 >
R< $&h ! > $+		$@ $1 < @ $&h .UUCP. >
R< $+ ! > $+		$: $1 ! $2 < @ $Y >		use UUCP_RELAY
R$+ < @ $~[ $* : $+ >	$@ $1 < @ $4 >			strip mailer: part
R$+ < @ >		$: $1 < @ *LOCAL* >		if no UUCP_RELAY


#
#  envelope sender rewriting
#
SEnvFromSMTP
R$+			$: $>PseudoToReal $1		sender/recipient common
R$* :; <@>		$@				list:; special case
R$*			$: $>MasqSMTP $1		qualify unqual'ed names
R$+			$: $>MasqEnv $1			do masquerading


#
#  envelope recipient rewriting --
#  also header recipient if not masquerading recipients
#
SEnvToSMTP
R$+			$: $>PseudoToReal $1		sender/recipient common
R$+			$: $>MasqSMTP $1		qualify unqual'ed names
R$* < @ *LOCAL* > $*	$: $1 < @ $j . > $2

#
#  header sender and masquerading header recipient rewriting
#
SHdrFromSMTP
R$+			$: $>PseudoToReal $1		sender/recipient common
R:; <@>			$@				list:; special case

# do special header rewriting
R$* <@> $*		$@ $1 <@> $2			pass null host through
R< @ $* > $*		$@ < @ $1 > $2			pass route-addr through
R$*			$: $>MasqSMTP $1		qualify unqual'ed names
R$+			$: $>MasqHdr $1			do masquerading


#
#  relay mailer header masquerading recipient rewriting
#
SMasqRelay
R$+			$: $>MasqSMTP $1
R$+			$: $>MasqHdr $1

Msmtp,		P=[IPC], F=mDFMuX, S=EnvFromSMTP/HdrFromSMTP, R=EnvToSMTP, E=\r\n, L=990,
T=DNS/RFC822/SMTP,
A=TCP $h
Mesmtp,		P=[IPC], F=mDFMuXa, S=EnvFromSMTP/HdrFromSMTP, R=EnvToSMTP, E=\r\n, L=990,
T=DNS/RFC822/SMTP,
A=TCP $h
Msmtp8,		P=[IPC], F=mDFMuX8, S=EnvFromSMTP/HdrFromSMTP, R=EnvToSMTP, E=\r\n, L=990,
T=DNS/RFC822/SMTP,
A=TCP $h
Mdsmtp,		P=[IPC], F=mDFMuXa%, S=EnvFromSMTP/HdrFromSMTP, R=EnvToSMTP, E=\r\n, L=990,
T=DNS/RFC822/SMTP,
A=TCP $h
Mrelay,		P=[IPC], F=mDFMuXa8, S=EnvFromSMTP/HdrFromSMTP, R=MasqSMTP, E=\r\n, L=2040,
T=DNS/RFC822/SMTP,
A=TCP $h


### /etc/mail/sendmail.mc ###
# divert(-1)dnl
# #-----------------------------------------------------------------------------
# # $Sendmail: debproto.mc,v 8.15.2 2015-12-10 18:02:49 cowboy Exp $
# #
# # Copyright (c) 1998-2010 Richard Nelson.  All Rights Reserved.
# #
# # cf/debian/sendmail.mc.  Generated from sendmail.mc.in by configure.
# #
# # sendmail.mc prototype config file for building Sendmail 8.15.2
# #
# # Note: the .in file supports 8.7.6 - 9.0.0, but the generated
# #	file is customized to the version noted above.
# #
# # This file is used to configure Sendmail for use with Debian systems.
# #
# # If you modify this file, you will have to regenerate /etc/mail/sendmail.cf
# # by running this file through the m4 preprocessor via one of the following:
# #	* make   (or make -C /etc/mail)
# #	* sendmailconfig 
# #	* m4 /etc/mail/sendmail.mc > /etc/mail/sendmail.cf
# # The first two options are preferred as they will also update other files
# # that depend upon the contents of this file.
# #
# # The best documentation for this .mc file is:
# # /usr/share/doc/sendmail-doc/cf.README.gz
# #
# #-----------------------------------------------------------------------------
# divert(0)dnl
# #
# #   Copyright (c) 1998-2005 Richard Nelson.  All Rights Reserved.
# #
# #  This file is used to configure Sendmail for use with Debian systems.
# #
# define(`_USE_ETC_MAIL_')dnl
# include(`/usr/share/sendmail/cf/m4/cf.m4')dnl
# VERSIONID(`$Id: sendmail.mc, v 8.15.2-3 2015-12-10 18:02:49 cowboy Exp )
# OSTYPE(`debian')dnl
# DOMAIN(`debian-mta')dnl
# dnl # Items controlled by /etc/mail/sendmail.conf - DO NOT TOUCH HERE
# undefine(`confHOST_STATUS_DIRECTORY')dnl        #DAEMON_HOSTSTATS=
# dnl # Items controlled by /etc/mail/sendmail.conf - DO NOT TOUCH HERE
# dnl #
# dnl # General defines
# dnl #
# dnl # SAFE_FILE_ENV: [undefined] If set, sendmail will do a chroot()
# dnl #	into this directory before writing files.
# dnl #	If *all* your user accounts are under /home then use that
# dnl #	instead - it will prevent any writes outside of /home !
# dnl #   define(`confSAFE_FILE_ENV',             `')dnl
# dnl #
# dnl # Daemon options - restrict to servicing LOCALHOST ONLY !!!
# dnl # Remove `, Addr=' clauses to receive from any interface
# dnl # If you want to support IPv6, switch the commented/uncommentd lines
# dnl #
# FEATURE(`no_default_msa')dnl
# dnl DAEMON_OPTIONS(`Family=inet6, Name=MTA-v6, Port=smtp, Addr=::1')dnl
# DAEMON_OPTIONS(`Family=inet,  Name=MTA-v4, Port=smtp, Addr=127.0.0.1')dnl
# dnl DAEMON_OPTIONS(`Family=inet6, Name=MSP-v6, Port=submission, M=Ea, Addr=::1')dnl
# DAEMON_OPTIONS(`Family=inet,  Name=MSP-v4, Port=submission, M=Ea, Addr=127.0.0.1')dnl
# dnl #
# dnl # Be somewhat anal in what we allow
# define(`confPRIVACY_FLAGS',dnl
# `needmailhelo,needexpnhelo,needvrfyhelo,restrictqrun,restrictexpand,nobodyreturn,authwarnings')dnl
# dnl #
# dnl # Define connection throttling and window length
# define(`confCONNECTION_RATE_THROTTLE', `15')dnl
# define(`confCONNECTION_RATE_WINDOW_SIZE',`10m')dnl
# dnl #
# dnl # Features
# dnl #
# dnl # use /etc/mail/local-host-names
# FEATURE(`use_cw_file')dnl
# dnl #
# dnl # The access db is the basis for most of sendmail's checking
# FEATURE(`access_db', , `skip')dnl
# dnl #
# dnl # The greet_pause feature stops some automail bots - but check the
# dnl # provided access db for details on excluding localhosts...
# FEATURE(`greet_pause', `1000')dnl 1 seconds
# dnl #
# dnl # Delay_checks allows sender<->recipient checking
# FEATURE(`delay_checks', `friend', `n')dnl
# dnl #
# dnl # If we get too many bad recipients, slow things down...
# define(`confBAD_RCPT_THROTTLE',`3')dnl
# dnl #
# dnl # Stop connections that overflow our concurrent and time connection rates
# FEATURE(`conncontrol', `nodelay', `terminate')dnl
# FEATURE(`ratecontrol', `nodelay', `terminate')dnl
# dnl #
# dnl # If you're on a dialup link, you should enable this - so sendmail
# dnl # will not bring up the link (it will queue mail for later)
# dnl define(`confCON_EXPENSIVE',`True')dnl
# dnl #
# dnl # Dialup/LAN connection overrides
# dnl #
# include(`/etc/mail/m4/dialup.m4')dnl
# include(`/etc/mail/m4/provider.m4')dnl
# dnl #
# dnl # Default Mailer setup
# MAILER_DEFINITIONS
# MAILER(`local')dnl
# MAILER(`smtp')dnl
# 















# Postfix
Created Tuesday 03 April 2018

<http://edoceo.com/howto/postfix-gateway>

mmtools@smartmold:~$ ls /etc/postfix
dynamicmaps.cf  main.cf  master.cf  postfix-files  postfix-script  post-install  sasl


# Hockey Puck
Created Thursday 21 December 2017

[.\Hockey_puck.pdf](./SmartMold_files/Smart_Mold/2_DESIGN/Hockey_Puck/Hockey_puck.pdf) 

![](./SmartMold_files/Smart_Mold/2_DESIGN/Hockey_Puck/Ice_hockey_puck_-_2.jpg)
[.\arduino-pro-mini-reference-design.zip](./SmartMold_files/Smart_Mold/2_DESIGN/Hockey_Puck/arduino-pro-mini-reference-design.zip) 
[.\Arduino-Pro-Mini-schematic.pdf](./SmartMold_files/Smart_Mold/2_DESIGN/Hockey_Puck/Arduino-Pro-Mini-schematic.pdf) 
[.\store.arduino.cc-Arduino Pro Mini.pdf](./SmartMold_files/Smart_Mold/2_DESIGN/Hockey_Puck/store.arduino.cc-Arduino Pro Mini.pdf) 
[.\store.arduino.cc-Arduino Pro Mini(0).pdf](./SmartMold_files/Smart_Mold/2_DESIGN/Hockey_Puck/store.arduino.cc-Arduino Pro Mini(0).pdf) 
[.\store.arduino.cc-Arduino Pro Mini(1).pdf](./SmartMold_files/Smart_Mold/2_DESIGN/Hockey_Puck/store.arduino.cc-Arduino Pro Mini(1).pdf) 

<https://store.arduino.cc/usa/arduino-pro-mini>

A standard ice hockey puck is black, 1 inch (25 mm) thick, 3 inches (76 mm) in diameter, and weighs between 5.5 and 6 ounces (156 and 170 g);[6] some pucks are heavier or lighter than standard (see below).

The FoxTrax "smart puck" was developed by the Fox television network when it held National Hockey League (NHL) broadcasting rights for the United States. The puck had integrated electronics to track its position on screen; a blue streak traced the path of the puck across the ice. The streak would turn red if the puck was shot especially hard. This was an experiment in broadcasting intended to help viewers unfamiliar with hockey to better follow the game by making the puck more visible. It was ill-received by many traditional hockey fans, but appreciated by many of the more casual viewers.[citation needed] The system debuted with much publicity in the NHL All-Star game at the Boston Fleet Center on January 20, 1996, but the system was shelved when Fox Sports lost the NHL broadcast rights three years later.

Firepuck
See also: FoxTrax

The use of the Firepuck in the early 1990s was the first attempt to improve the visibility of hockey pucks as seen on television. This invention incorporated coloured retro reflective materials of either embedded lens elements or prismatic reflectors laminated into recesses on the flat surfaces and the vertical edge of a standard hockey puck. Yellow was the preferred reflected colour. A spotlight was required to be positioned on the TV camera and focused at the centre of the viewing area.

A short demonstration tape of the Minnesota North Stars skating with the Firepuck was shown during the period break at the 1993 NHL All-Star Game in Montreal. The International Hockey League (IHL) pursued testing the Firepuck with its inventor, Donald Klassen. The next television viewing was the IHL All-Star Game in Fort Wayne, Indiana, January 1994, where the Firepuck was used for the entire game. The IHL tested the Firepuck in two more games, and finally the East Coast Hockey League used it January 17, 1997, for their All-Star Game.

The use of the Firepuck was discontinued because of these reasons:

The slight structural change increased the tendency for the puck to bounce on the ice. This made it more difficult for the goaltender and resulted in increased scoring.
The skaters objected to the use of camera spotlights which reflected off the ice.
The television viewing contrast of the Firepuck was not noticeably enhanced when the camera view was of the entire rink, this being the most common camera shot.

The Firepuck name was branded during the 1990s but has since been discontinued.


# New Platform
Created Friday 15 December 2017

NPE'18 and Production

Investigation of hardware for production
Key goals:

* Meet functionality goals
* Ease of assemby
* Longevity of platform


Currently on Beaglebone Black with hardware additions

Primary candidate 
CompuLab SBC-IOT-iMX7 - NXP i.MX7 Internet of Things Single Board Computer

<http://www.compulab.com/products/sbcs/sbc-iot-imx7-nxp-i-mx-7-internet-of-things-single-board-computer/>

![](file:///C:/Users/sellnerge/Documents/!SmartMold/Powerpoint/pictures/Platform_20171217.png)

Additional Issues to cover:

* Achieve a design that all functionality is ideally located on same board for ease of assembly
* Ports provide some protection from ingress of water due to splash
* Case ?
* Pricing
* Delivery schedule


# Beaglebone Black
Created Friday 15 December 2017

<https://www.ccoderun.ca/programming/2015-11-30_BeagleBone/index.html#beaglebone>
[.\Programming Comments - BeagleBone Black, BeagleBone Green, and Grove.xlsx](./SmartMold_files/Smart_Mold/2_DESIGN/New_Platform/Beaglebone_Black/Programming Comments - BeagleBone Black, BeagleBone Green, and Grove.xlsx) 

![](./SmartMold_files/Smart_Mold/2_DESIGN/New_Platform/Beaglebone_Black/pasted_image002.png)

# Compare
Created Friday 15 December 2017

[.\Software Requirements Document (SRD).xlsx](./SmartMold_files/Smart_Mold/2_DESIGN/New_Platform/Beaglebone_Black/Compare/Software Requirements Document (SRD).xlsx) 

![](./SmartMold_files/Smart_Mold/2_DESIGN/New_Platform/Beaglebone_Black/Compare/pasted_image.png)

# Beaglebone PocketBeagle
Created Thursday 21 December 2017

<https://github.com/beagleboard/pocketbeagle/wiki/FAQ>
<https://github.com/beagleboard/pocketbeagle/wiki/mikroBus%E2%84%A2-Click-Boards>
<https://www.mikroe.com/usb-uart-click>
<https://www.mikroe.com/eth-click>
<https://www.mikroe.com/eth-wiz-click>
<https://www.mikroe.com/rtc-click>
<https://www.mikroe.com/rtc-5-click>
<https://www.mikroe.com/rtc6-click>

[.\pocketbeagle-master.zip](./SmartMold_files/Smart_Mold/2_DESIGN/New_Platform/Beaglebone_PocketBeagle/pocketbeagle-master.zip) 

# Cape-Beta
Created Thursday 18 January 2018


# Cape-Production
Created Thursday 18 January 2018


# Power over Ethernet (POE) pinout
Created Thursday 18 January 2018

![](./SmartMold_files/Smart_Mold/2_DESIGN/New_Platform/Cape-Production/Power_over_Ethernet_(POE)_pinout/pasted_image.png)

<http://pinoutguide.com/Net/poe_pinout.shtml>

![](./SmartMold_files/Smart_Mold/2_DESIGN/New_Platform/Cape-Production/Power_over_Ethernet_(POE)_pinout/pasted_image001.png)
<https://lh5.googleusercontent.com/proxy/e6fCiVFZXTB2dohIEgYOSiWx5xEccF0pjtxySHpUOmjm2_8g-ZpR1s6P58GIq3aY2rqxy8Ew6RlNkwkV6wnYpmOk8XCrsIjKBD8EYavNDi7lOkmSQCYDYsLFA6_K6kGUdVvnYLAHyf9Kqpg=w5000-h5000>
![](./SmartMold_files/Smart_Mold/2_DESIGN/New_Platform/Cape-Production/Power_over_Ethernet_(POE)_pinout/pasted_image002.png)

# USB-Subsystem
Created Thursday 18 January 2018

<http://www.asix.com.tw/products.php?op=pItemdetail&PItemID=105;65;86&PLine=65>
<https://wikidevi.com/wiki/Beagleboard_xM>
<http://www.microchip.com/wwwproducts/en/LAN9514>

<https://github.com/beagleboard/beagleboard-xm>


<http://www.microchip.com/wwwproducts/en/LAN9514>
<http://ww1.microchip.com/downloads/en/DeviceDoc/00002306A.pdf>
<https://www.mouser.com/ds/2/268/9514-477449.pdf>
<https://www.digikey.ca/product-detail/en/microchip-technology/LAN9514-JZX-TR/LAN9514-JZX-CT-ND/5043634>

<https://www.digikey.ca/products/en/integrated-circuits-ics/interface-controllers/753>
<https://www.digikey.ca/products/en/integrated-circuits-ics/interface-controllers/753?k=&pkeyword=&pv110=841&FV=ffe002f1%2Cfffc0096&mnonly=0&ColumnSort=0&page=1&quantity=0&ptm=0&fid=0&pageSize=25>

<https://www.netburner.com/products/core-modules/mod5441x>

![](./SmartMold_files/Smart_Mold/2_DESIGN/New_Platform/Cape-Production/USB-Subsystem/pasted_image001.png)

![](./SmartMold_files/Smart_Mold/2_DESIGN/New_Platform/Cape-Production/USB-Subsystem/pasted_image002.png)

# CompuLab SBC-IOT-iMX7
Created Friday 15 December 2017

<http://mediawiki.compulab.com/w/index.php5/IOT-GATE-iMX7_and_SBC-IOT-iMX7_NXP_i.MX7_SW_Resources>
<http://www.compulab.com/products/sbcs/sbc-iot-imx7-nxp-i-mx-7-internet-of-things-single-board-computer/#overview>

![](file:///C:/Users/sellnerge/Downloads/compulab_sbc-iot-imx7_single-board-computer.jpg)

 •	"Option" column specifies the configuration code required to have the particular feature.

* "+" means that the feature is always available


[.\compulab.com-SBC-IOT-iMX7  NXP iMX 7  Internet of Things Gateway SBC.pdf](./SmartMold_files/Smart_Mold/2_DESIGN/New_Platform/CompuLab_SBC-IOT-iMX7/compulab.com-SBC-IOT-iMX7  NXP iMX 7  Internet of Things Gateway SBC.pdf) 
[.\compulab.com-SBC-IOT-iMX7  Pricing.pdf](./SmartMold_files/Smart_Mold/2_DESIGN/New_Platform/CompuLab_SBC-IOT-iMX7/compulab.com-SBC-IOT-iMX7  Pricing.pdf) 

7/5/2017 Email received from Rhett Evans [[R.Evans@andersdx.com](mailto:R.Evans@andersdx.com)]

Hi George, 

I am still waiting on confirmation on the supported RAM size but just to give you an idea of pricing here are the costs for the SBC configured close to the options you specified:

RAM: 1GB
Flash: 16GB
LAN: x2

WAB: WIFI + Bluetooth. 
1Koff @ $127.50 each
500off@ $140.00 each
100off@ $152.50 each

W: With WIFI only
1Koff @ $120.00 each
500off@ $132.00 each
100off@ $144.50 each

Evaluation kit (features 1off fully featured SBC): $435.00 

When would it be convenient for me to call you to discuss this in a little more detail?

Best regards, 

Rhett

7/4/2017 Email received from Rhett Evans [[R.Evans@andersdx.com](mailto:R.Evans@andersdx.com)]

Hi George, 

Great to hear from you and thank you for your RFQ. I am afraid that the datasheet may contain a typo regarding the supported RAM size and I am checking with the factory because as it stands the max supported RAM is 1GB is far as I am aware.  Also the supported eMMC options are 4GB/16GB/32GB.

I will get back to you tomorrow.

Best regards

Rhett

7/4/2017 Email sent to Rhett Evans [[R.Evans@andersdx.com](mailto:R.Evans@andersdx.com)]

Hello Rhett,

I was wondering if we could get pricing for the following configurations for quantities 1 and 1000 for each.

Thanks

| Feature                  | Specification 1   | Specification 2   |
|:-------------------------|:------------------|:------------------|
| CPU Architecture         | ARM Cortex A7     | ARM Cortex A7     |
| CPU Manufacturer         | Freescale         | Freescale         |
| CPU Model                | i.MX7 Dual Core   | i.MX7 Dual Core   |
| CPU Frequency            | 1GHz              | 1GHz              |
| Real Time Co-Processor   | Yes               | Yes               |
| Memory                   | 1GB DDR3L         | 2GB DDR3L         |
| Onboard Storage          | 8GB eMMC/NAND     | 16GB eMMC/NAND    |
| Display Interface        | HDMI              | HDMI              |
| Display Resolution (Max) | 1920x1080         | 1920x1080         |
| Ethernet Ports           | 2                 | 2                 |
| WIFI                     | 802.11a/b/g/n     | 802.11a/b/g/n     |
| Bluetooth                | V4.1              | V4.1              |
| USB 2.0 Ports Host       | 2                 | 2                 |
| MMC/SD/SDIO              | 1                 | 1                 |
| PCIe                     | 1                 | 1                 |
| UART/Serial              | 2                 | 2                 |
| GPIO                     | 8                 | 8                 |
| I2C                      | 1                 | 1                 |
| SPI                      | 1                 | 1                 |
| Power Supply Voltage     | 8V-24V            | 8V-24V            |
| Dimensions               | 100 x 80 x 20     | 100 x 80 x 20     |
| OS Support               | Linux/Linux Yocto | Linux/Linux Yocto |


7/3/2017 Email received from Rhett Evans [[R.Evans@andersdx.com](mailto:R.Evans@andersdx.com)]

Hi Thai, 

Please find attached the datasheet for the SBC we were discussing last week as a potential solution for your Smartmold project. 

Highlights:
-	Dual Ethernet
		WIFI 
		3G Modem support
		Guaranteed Operating Temperatures.

If you can give me a rough specification I would be send you a quotation for it.

I look forward to hearing from you

Best regards

Rhett

Rhett Evans         |  Embedded Systems Sales 
Follow Us:           
anders electronics plc | Kings Studios, 43 – 45 Kings Terrace, Camden, London NW1 0JR
anders electronics plc  |  T: +44(0)7811 336579 |  E: [r.evans@andersDX.com](mailto:r.evans@andersDX.com)  |  www.andersDX.com

# GumStix
Created Tuesday 09 January 2018


# SparkFun
Created Thursday 21 December 2017

<http://microcontrollershop.com/product_info.php?products_id=2755>
<https://github.com/sparkfun/Logomatic/tree/V_2.7/Firmware>
<https://www.sparkfun.com/>

<https://www.sparkfun.com/products/12772>
<https://www.sparkfun.com/tutorials/94>
<https://www.sparkfun.com/products/14430>
3 acceleration channels, 3 angular rate channels, 3 magnetic field channels
±2/±4/±8/±16 g linear acceleration full scale
±4/±8/±12/±16 gauss magnetic full scale
±245/±500/±2000 dps angular rate full scale
SPI / I2C serial interfaces
Operating Voltage: 3.3V
microSD Card Slot
JST Connector for GPS UART
	
SparkFun OpenLog
<https://www.sparkfun.com/products/13712?_ga=2.61904620.1977460309.1513884159-738982223.1513884159>
<https://www.sparkfun.com/products/13712?_ga=2.232896222.1977460309.1513884159-738982223.1513884159>
![](./SmartMold_files/Smart_Mold/2_DESIGN/New_Platform/SparkFun/13712-04a.jpg)
<https://learn.sparkfun.com/tutorials/openlog-hookup-guide?_ga=2.169516385.1977460309.1513884159-738982223.1513884159>
[.\learn001.sparkfun.com-OpenLog Hookup Guide.pdf](./SmartMold_files/Smart_Mold/2_DESIGN/New_Platform/SparkFun/learn001.sparkfun.com-OpenLog Hookup Guide.pdf) 
![](./SmartMold_files/Smart_Mold/2_DESIGN/New_Platform/SparkFun/OpenLog_bb.png)
SparkFun OpenLog  $14.95 
VCC Input: 3.3V-12V (Recommended 3.3V-5V)
Log to low-cost microSD FAT16/32 cards up to 64GB
Simple command interface
Configurable baud rates (up to 115200bps)
Preprogrammed ATmega328 and bootloader
Four SPI pogo pins
Two LEDs indicate writing status
2mA idle, 6mA at maximum recording rate
![](./SmartMold_files/Smart_Mold/2_DESIGN/New_Platform/SparkFun/OpenLog.png)
Arduino Pro Mini 328 - 3.3V/8MHz  $9.95 
ATmega328 running at 8MHz with external resonator (0.5% tolerance)
Low-voltage board needs no interfacing circuitry to popular 3.3V devices and modules (GPS, accelerometers, sensors, etc)
0.8mm Thin PCB
USB connection off board
Weighs less than 2 grams!
Supports auto-reset
3.3V regulator
Max 150mA output
Over current protected
DC input 3.3V up to 12V
On board Power and Status LEDs
Analog Pins: 8
Digital I/Os: 14
0.7x1.3" (18x33mm)
	
SparkFun Bluetooth Mate Gold  $34.95 
[.\learn.sparkfun.com-Using the BlueSMiRF.pdf](./SmartMold_files/Smart_Mold/2_DESIGN/New_Platform/SparkFun/learn.sparkfun.com-Using the BlueSMiRF.pdf) 
<https://www.sparkfun.com/products/12580>
v6.15 Firmware
Designed to work directly with Arduino Pro’s and LilyPad main boards
FCC Approved Class 1 Bluetooth® Radio Modem
Very robust link both in integrity and transmission distance (100m) - no more buffer overruns!
Low power consumption : 25mA avg
Hardy frequency hopping scheme - operates in harsh RF environments like WiFi, 802.11g, and Zigbee
Encrypted connection
Frequency: 2.402~2.480 GHz
Operating Voltage: 3.3V-6V
Serial communications: 2400-115200bps
Operating Temperature: -40 ~ +70C
Built-in antenna
Board: 1.75x0.65"
	
WiFly RN-171 802.11b/g Serial Module - Roving Networks $19.95
<https://www.sparkfun.com/products/11049>
Ultra low power for battery powered applications
Firmware configurable transmit power: 0dBm to +12dBm
Hardware interfaces: UART
Supports Adhoc and infrastructure networking modes
User programmable GPIO & ADCs
Real-time clock for time-stamping, auto-sleep, and auto-wakeup modes
Run directly from batteries or regulated power supplies
Configuration over serial or wireless interface using simple ASCII commands
Over the air firmware upgrade
Secure Wi-Fi authentication schemes (WEP/WPA/WPA2)
Full onboard TCP/IP stack (no external drivers required)
![](./SmartMold_files/Smart_Mold/2_DESIGN/New_Platform/SparkFun/11049-04.jpg)
[.\WiFly-RN-171-DS.pdf](./SmartMold_files/Smart_Mold/2_DESIGN/New_Platform/SparkFun/WiFly-RN-171-DS.pdf) 
[.\rn-wiflycr-ug-v1.2r.pdf](./SmartMold_files/Smart_Mold/2_DESIGN/New_Platform/SparkFun/rn-wiflycr-ug-v1.2r.pdf) 



<https://www.sparkfun.com/products/14412>
STM32F405RG microcontroller
168 MHz Cortex M4 CPU with hardware floating point
1024KiB flash ROM and 192KiB RAM
MicroUSB connector for power and serial communication
MicroSD card slot, supporting standard and high-capacity SD cards
3-axis accelerometer (MMA7660)
Real-Time Clock (RTC) with optional battery backup
24 GPIO on left and right edges and 5 GPIO on bottom row, plus LED and switch GPIO available on bottom row
3x 12-bit analog to digital converters, available on 16 pins, 4 with analog ground shielding
2x 12-bit digital to analog (DAC) converters, available on pins X5 and X6
4 LEDs (red, green, yellow and blue)
1 reset and 1 user switch
Onboard 3.3V LDO voltage regulator, capable of supplying up to 250mA, input voltage range 3.6V to 16V
DFU bootloader in ROM for easy upgrading of firmware

<https://www.sparkfun.com/products/14056>


120MHz ARM Cortex-M4 with Floating Point Unit
512K Flash, 192K RAM, 4K EEPROM
Microcontroller Chip MK64FX512VMD12
1 CAN Bus Port
16 General Purpose DMA Channels
5V Tolerance on All Digital I/O Pins
62 I/O Pins (42 breadboard friendly)
25 Analog Inputs to 2 ADCs with 13-bit resolution
2 Analog Outputs (DACs) with 12-bit resolution
20 PWM Outputs (Teensy 3.6 has 22 PWM)
USB Full-Speed (12Mbit/sec) Port
Ethernet mac, capable of full 100Mbit/sec speed
Native (4-bit SDIO) microSD card port
I2S Audio Port, 4-Channel Digital Audio Input and Output
14 Hardware Timers
Cryptographic Acceleration Unit
Random Number Generator
CRC Computation Unit
6 Serial Ports (2 with FIFO and Fast Baud Rates)
3 SPI Ports (1 with FIFO)
3 I2C Ports
Real-Time Clock (RTC)
Pre-soldered Headers
62.3mm x 18mm x 4.2mm (2.5in x 0.7in x 0.2in)

<https://www.sparkfun.com/products/14058>


180 MHz ARM Cortex-M4 with Floating Point Unit
1M Flash, 256K RAM, 4K EEPROM
Microcontroller Chip MK66FX1M0VMD18
USB High Speed (480Mbit/sec) Port
2 CAN Bus Ports
32 General Purpose DMA Channels
22 PWM Outputs
4 I2C Ports
11 Touch-Sensing Inputs
62 I/O Pins (42 breadboard friendly)
25 Analog Inputs to 2 ADCs with 13-bit resolution
2 Analog Outputs (DACs) with 12-bit resolution
USB Full-Speed (12Mbit/sec) Port
Ethernet mac, capable of full 100Mbit/sec speed
Native (4-bit SDIO) microSD card port
I2S Audio Port, 4-Channel Digital Audio Input and Output
14 Hardware Timers
Cryptographic Acceleration Unit
Random Number Generator
CRC Computation Unit
6 Serial Ports (2 with FIFO and Fast Baud Rates)
3 SPI Ports (1 with FIFO)
Real-Time Clock (RTC)
Pre-soldered Headers
62.3mm x 18mm x 4.2mm (2.5in x 0.7in x 0.2in)

<https://www.sparkfun.com/products/11520>


ATmega32U4 running at 8MHz
Arduino-Compatible Bootloader
XBee Socket
Lithium Polymer Battery Compatible
MCP73831T LiPo Charger
Reset button
On/Off Switch
Status/Charge/RSSI LEDs

<https://www.sparkfun.com/products/14055>


120MHz ARM Cortex-M4 with Floating Point Unit
512K Flash, 192K RAM, 4K EEPROM
Microcontroller Chip MK64FX512VMD12
1 CAN Bus Port
16 General Purpose DMA Channels
5V Tolerance on All Digital I/O Pins
62 I/O Pins (42 breadboard friendly)
25 Analog Inputs to 2 ADCs with 13-bit resolution
2 Analog Outputs (DACs) with 12-bit resolution
20 PWM Outputs (Teensy 3.6 has 22 PWM)
USB Full Speed (12Mbit/sec) Port
Ethernet mac, capable of full 100Mbit/sec speed
Native (4-bit SDIO) micro SD card port
I2S Audio Port, 4-Channel Digital Audio Input & Output
14 Hardware Timers
Cryptographic Acceleration Unit
Random Number Generator
CRC Computation Unit
6 Serial Ports (2 with FIFO and Fast Baud Rates)
3 SPI Ports (1 with FIFO)
3 I2C Ports
Real-Time Clock
62.3mm x 18.0mm x 4.2mm (2.5in x 0.7in x 0.2in)

<https://www.sparkfun.com/products/14057>


180 MHz ARM Cortex-M4 with Floating Point Unit
1M Flash, 256K RAM, 4K EEPROM
Microcontroller Chip MK66FX1M0VMD18
USB High Speed (480Mbit/sec) Port
2 CAN Bus Ports
32 General Purpose DMA Channels
22 PWM Outputs
4 I2C Ports
11 Touch-Sensing Inputs
62 I/O Pins (42 breadboard friendly)
25 Analog Inputs to 2 ADCs with 13-bit resolution
2 Analog Outputs (DACs) with 12-bit resolution
USB Full Speed (12Mbit/sec) Port
Ethernet mac, capable of full 100Mbit/sec speed
Native (4-bit SDIO) micro SD card port
I2S Audio Port, 4-Channel Digital Audio Input & Output
14 Hardware Timers
Cryptographic Acceleration Unit
Random Number Generator
CRC Computation Unit
6 Serial Ports (2 with FIFO and Fast Baud Rates)
3 SPI Ports (1 with FIFO)
Real-Time Clock
62.3mm x 18.0mm x 4.2mm (2.5in x 0.7in x 0.2in)

[.\BubbleLogger.zip](./SmartMold_files/Smart_Mold/2_DESIGN/New_Platform/SparkFun/BubbleLogger.zip) 
[.\learn.sparkfun.com-OpenLog Hookup Guide.pdf](./SmartMold_files/Smart_Mold/2_DESIGN/New_Platform/SparkFun/learn.sparkfun.com-OpenLog Hookup Guide.pdf) 
[.\Logomatic.pdf](./SmartMold_files/Smart_Mold/2_DESIGN/New_Platform/SparkFun/Logomatic.pdf) 
[.\Logomatic.zip](./SmartMold_files/Smart_Mold/2_DESIGN/New_Platform/SparkFun/Logomatic.zip) 
[.\LogomaticUserManual.pdf](./SmartMold_files/Smart_Mold/2_DESIGN/New_Platform/SparkFun/LogomaticUserManual.pdf) 

AT91SAM9G25 Embedded Linux Module, 256MB, microSD, micro-USB
25mm x 53mm
<http://microcontrollershop.com/product_info.php?products_id=7012>
![](file:///C:/Users/sellnerge/Downloads/SparkFun/ariettalabels.jpg)

WiFi OEM Module, 2mm Pitch, USB2.0 Signals, 3.3V, PCB Antenna
<http://microcontrollershop.com/product_info.php?products_id=7013>

External Wi-Fi (IEEE802.11) Antenna, RP-SMA
<http://microcontrollershop.com/product_info.php?products_id=2479>

Internal Antenna Adapter Cable, U.FL to RP-SMA
<http://microcontrollershop.com/product_info.php?products_id=2480>

Power Consumption
Idle after boot CPU 1%	59mA @ 5V (295mW)
During boot	84mA @ 5V (420 mW)
CPU load 100% (memtester)	84mA @ 5V (420 mW)
Peak During boot with WiFi module IA	150mA @ 5V (750 mW)
Idle after boot CPU 1% with WiFi module IA not associated    	78mA @ 5V (390 mW)
Idle with WiFi IA associated no traffic	132mA @ 5V (660 mW)
During WiFi IA download no other activities	160mA @ 5V (800 mW)

AT91SAM9G25 Embedded Linux Module, 256MB, microSD, micro-USB 	US$45.00
WiFi OEM Module, 2mm Pitch, USB2.0 Signals, 3.3V, PCB Antenna		+	 US$10.50
Internal Antenna Adapter Cable, U.FL to RP-SMA		+	 US$9.50
External Wi-Fi (IEEE802.11) Antenna, RP-SMA		+	 US$8.00


# Smart Plunger
Created Thursday 21 December 2017

[.\Technology Review.xlsx](./SmartMold_files/Smart_Mold/2_DESIGN/Smart_Plunger/Technology Review.xlsx) 

[.\Smart Software Architecture.vsd](./SmartMold_files/Smart_Mold/2_DESIGN/Smart_Plunger/Smart Software Architecture.vsd) 

<https://www.adafruit.com/product/254>
<https://learn.adafruit.com/micropython-hardware-sd-cards>
<https://www.adafruit.com/product/3184>
<https://pycom.io/hardware/wipy-3-0-specs/>
<https://pycom.io/product/w01/>
<https://www.adafruit.com/product/2960>
<https://learn.adafruit.com/adafruit-micro-sd-breakout-board-card-tutorial>
<https://www.adafruit.com/product/2795>
<https://www.adafruit.com/product/2479>
<https://learn.adafruit.com/introducing-the-adafruit-bluefruit-le-uart-friend/software>
<http://www.yourduino.com/sunshop/index.php?l=product_detail&p=384>
<https://github.com/beagleboard/pocketbeagle/wiki/System-Reference-Manual>
<https://www.adafruit.com/product/3400>
<https://www.mikroe.com/hexiwear>
<https://www.mikroe.com/blog/hexiwear-user-manual>
<https://www.mikroe.com/hexiwear-battery-pack>
<http://www.cvemonitor.com/image/CVeMonitor-Features.pdf>

[.\Untitled.dxf](./SmartMold_files/Smart_Mold/2_DESIGN/Smart_Plunger/Untitled.dxf) 
![](./SmartMold_files/Smart_Mold/2_DESIGN/Smart_Plunger/Untitled.png)


# CVe Monitor
Created Thursday 21 December 2017

<http://www.asttech.com/>
<http://www.procomps.com/Home/Default.aspx>
<http://www.asttech.com/news/NewCVeLive.htm>

[.\AST-CVeMonitor-Live-2015.pdf](./SmartMold_files/Smart_Mold/2_DESIGN/Smart_Plunger/CVe_Monitor/AST-CVeMonitor-Live-2015.pdf) 
[.\AST-NPE2015-CVeLive.pdf](./SmartMold_files/Smart_Mold/2_DESIGN/Smart_Plunger/CVe_Monitor/AST-NPE2015-CVeLive.pdf) 
[.\asttech.com-CVe Live NPE2015.pdf](./SmartMold_files/Smart_Mold/2_DESIGN/Smart_Plunger/CVe_Monitor/asttech.com-CVe Live NPE2015.pdf) 
[.\cvev2(2).pdf](./SmartMold_files/Smart_Mold/2_DESIGN/Smart_Plunger/CVe_Monitor/cvev2(2).pdf) 
[.\cveV2.pdf](./SmartMold_files/Smart_Mold/2_DESIGN/Smart_Plunger/CVe_Monitor/cveV2.pdf) 
[.\PRO-CVeMonitor-Live-2015.pdf](./SmartMold_files/Smart_Mold/2_DESIGN/Smart_Plunger/CVe_Monitor/PRO-CVeMonitor-Live-2015.pdf) 

![](file:///C:/Users/sellnerge/Documents/!SmartMold/Puck/CVe%20Monitor%20Mount.png)

# Mikroe
Created Thursday 21 December 2017

<https://www.mikroe.com/ready-mmc-ready?search_query=ready+pic+mikrobootloader&results=6>

[.\mmc-ready-manual-v100.pdf](./SmartMold_files/Smart_Mold/2_DESIGN/Smart_Plunger/Mikroe/mmc-ready-manual-v100.pdf) 


# PocketBone
Created Monday 08 January 2018

![](./SmartMold_files/Smart_Mold/2_DESIGN/Smart_Plunger/PocketBone/Smart Software Architecture.png)

# TI Launchpad
Created Thursday 21 December 2017

<http://www.ti.com/tool/LAUNCHXL-CC2650>

# Software Prototype
Created Monday 05 February 2018



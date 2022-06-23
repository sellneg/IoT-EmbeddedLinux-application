# gcc -o mmcycle mmcycle.c -Wall -Werror -lrt -lpthread -lsoc -lhiredis
gcc mmcycle.c -o mmcycle -std=c99  -Wall -Werror -lrt -lpthread -lsoc -lhiredis -I/usr/include/mysql -lmysqlclient `mysql_config --cflags --libs`

#pragma once

#include "../config/core.h"
#include "../common/core.h" // CORE_ST_LAST
#include "../common/msg_conf.h"
#include "../common/mmo.h"

#include "channel.hpp"

struct mmo_dis_server {
	int fd;
	uint32 ip;
	uint16 port;
};

int disif_parse_login(int fd);
int disif_parse_message_from_disc(int fd);
int disif_send_message_to_disc(struct Channel *channel, char *msg);


void disif_connectack(int fd, uint8 errCode);
void disif_setport(uint16 port);
void do_init_disif(void);
void do_final_disif(void);
int disif_parse(int fd);
void disif_setuserid(char *id);
void disif_setpasswd(char *pwd);
void disif_on_disconnect();
#ifndef MAIN_H
# define MAIN_H

#include <vpn.h>
#include <tlslib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include <net/if.h>

int cmd_parser (int argc, char **argv, struct cfg_st* config);

struct proc_list_st {
	struct list_head list;
	int fd;
	pid_t pid;
	struct sockaddr_storage remote_addr; /* peer address */
	socklen_t remote_addr_len;
	char username[MAX_USERNAME_SIZE]; /* the owner */
	uint8_t cookie[COOKIE_SIZE]; /* the cookie associate with the session */
	uint8_t session_id[GNUTLS_MAX_SESSION_ID];
	
	/* the tun lease this process has */
	struct lease_st* lease;
};

typedef struct main_server_st {
	struct cfg_st *config;
	struct tun_st *tun;
	tls_cache_db_st *tls_db;
} main_server_st;

int handle_commands(main_server_st *s, struct proc_list_st* cur);


int send_resume_fetch_reply(main_server_st* s, struct proc_list_st* proc,
		cmd_resume_reply_t r, struct cmd_resume_fetch_reply_st * reply);

int handle_resume_delete_req(main_server_st* s, struct proc_list_st* proc,
  			   const struct cmd_resume_fetch_req_st * req);

int handle_resume_fetch_req(main_server_st* s, struct proc_list_st* proc,
  			   const struct cmd_resume_fetch_req_st * req, 
  			   struct cmd_resume_fetch_reply_st * rep);

int handle_resume_store_req(main_server_st* s, struct proc_list_st *proc,
  			   const struct cmd_resume_store_req_st * req);

#endif
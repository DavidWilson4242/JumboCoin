#ifndef CLIENT_HPP
#define CLIENT_HPP

#include "tcp/include/tcp_client.h"

namespace NodeClient {
  
  const uint32_t PORT = 8080;

  void Init();
  void ReceiveMessage(const char *message, size_t size);
  void Disconnected(const pipe_ret_t& pipe);

};

#endif
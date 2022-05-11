
#include "tinyrpc/comm/log.h"
#include "tinyrpc/comm/config.h"
#include "tinyrpc/net/net_address.h"
#include "tinyrpc/net/tcp/tcp_server.h"
#include "user_info_service.h"


tinyrpc::Logger::ptr gRpcLogger; 
tinyrpc::Config::ptr gRpcConfig;

int main(int argc, char* argv[]) {

  gRpcLogger = std::make_shared<tinyrpc::Logger>();
  gRpcLogger->init("UserInfoServer");
  gRpcConfig = std::make_shared<tinyrpc::Config>("../conf/tinyrpc.xml");

  tinyrpc::IPAddress::ptr addr = std::make_shared<tinyrpc::IPAddress>("127.0.0.1", 39999);
  tinyrpc::TcpServer server(addr);

  UserInfoServiceImpl service;
  server.registerService(&service);

  server.start();

  return 0;
}
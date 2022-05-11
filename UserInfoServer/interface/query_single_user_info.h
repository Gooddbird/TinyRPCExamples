#ifndef USERINFOSERVER_INTERFACE_QUERY_SINGLE_USER_INFO_H
#define USERINFOSERVER_INTERFACE_QUERY_SINGLE_USER_INFO_H

#include "UserInfoServer.pb.h"

class QuerySingleUserInfoInterface {
 public:
  QuerySingleUserInfoInterface() = default;
  ~QuerySingleUserInfoInterface() = default;

  int run(const ::QuerySingleUserInfoRequest* request, ::QuerySingleUserInfoResponse* response);

};

#endif
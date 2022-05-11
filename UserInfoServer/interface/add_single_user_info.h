#ifndef USERINFOSERVER_INTERFACE_ADD_SINGLE_USER_INFO_H
#define USERINFOSERVER_INTERFACE_ADD_SINGLE_USER_INFO_H

#include "UserInfoServer.pb.h"

class AddSingleUserInfoInterface {
 public:
  AddSingleUserInfoInterface() = default;
  ~AddSingleUserInfoInterface() = default;

  int run(const ::AddSingleUserInfoRequest* request, ::AddSingleUserInfoResponse* response);

};

#endif
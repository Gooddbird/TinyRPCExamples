#ifndef USERINFOSERVER_SERVICE_USER_INFO_SERVICE_H
#define USERINFOSERVER_SERVICE_USER_INFO_SERVICE_H

#include <google/protobuf/service.h>
#include "UserInfoServer.pb.h"

class UserInfoServiceImpl : public UserInfoService {

 public:
  UserInfoServiceImpl() = default;
  ~UserInfoServiceImpl() = default;

  void QuerySingleUserInfo(google::protobuf::RpcController* controller,
                       const ::QuerySingleUserInfoRequest* request,
                       ::QuerySingleUserInfoResponse* response,
                       ::google::protobuf::Closure* done);

  void AddSingleUserInfo(google::protobuf::RpcController* controller,
                       const ::AddSingleUserInfoRequset* request,
                       ::AddSingleUserInfoResponse* response,
                       ::google::protobuf::Closure* done);

};


#endif
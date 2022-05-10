#ifndef USERINFOSERVER_SERVICE_USER_INFO_SERVICE_H
#define USERINFOSERVER_SERVICE_USER_INFO_SERVICE_H

#include "pb/UserInfoServer.pb.h"

class UserInfoServiceImpl : public UserInfoService {

 public:
  UserInfoServiceImpl() = default;
  ~UserInfoServiceImpl() = default;

  void QuerySingleUserInfo(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                       const ::QuerySingleUserInfoRequest* request,
                       ::QuerySingleUserInfoResponse* response,
                       ::google::protobuf::Closure* done);

  void AddSingleUserInfo(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                       const ::AddSingleUserInfoRequset* request,
                       ::AddSingleUserInfoResponse* response,
                       ::google::protobuf::Closure* done);

};


#endif
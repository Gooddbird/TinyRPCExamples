#include "user_info_service.h"
#include "UserInfoServer.pb.h"
#include "query_single_user_info.h"

void UserInfoServiceImpl::QuerySingleUserInfo(google::protobuf::RpcController* controller,
                      const ::QuerySingleUserInfoRequest* request,
                      ::QuerySingleUserInfoResponse* response,
                      ::google::protobuf::Closure* done) {

  QuerySingleUserInfoInterface interface;
  interface.run(request, response);

  done->Run();
}

void UserInfoServiceImpl::AddSingleUserInfo(google::protobuf::RpcController* controller,
                      const ::AddSingleUserInfoRequset* request,
                      ::AddSingleUserInfoResponse* response,
                      ::google::protobuf::Closure* done) {
  


}

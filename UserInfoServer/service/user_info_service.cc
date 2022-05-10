#include "user_info_service.h"
#include "pb/UserInfoServer.pb.h"
#include "interface/query_single_user_info.h"
#include "interface/abstract_interface.h"


void UserInfoServiceImpl::QuerySingleUserInfo(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                      const ::QuerySingleUserInfoRequest* request,
                      ::QuerySingleUserInfoResponse* response,
                      ::google::protobuf::Closure* done) {

  AbstractInterface::ptr tmp = std::make_shared<QuerySingleUserInfo>();
  tmp->run(request, response);
}

void UserInfoServiceImpl::AddSingleUserInfo(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                      const ::AddSingleUserInfoRequset* request,
                      ::AddSingleUserInfoResponse* response,
                      ::google::protobuf::Closure* done) {
  



}


#endif
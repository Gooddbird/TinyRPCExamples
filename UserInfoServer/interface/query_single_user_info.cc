#include "query_single_user_info.h"
#include "pb/UserInfoServer.pb.h"

int QuerySingleUserInfo::run() {

int QuerySingleUserInfo::run(google::protobuf::Service* request, google::protobuf::Service* response) {

  QuerySingleUserInfoRequest* req = dynamic_cast<QuerySingleUserInfoRequest*>(request);

}

#endif
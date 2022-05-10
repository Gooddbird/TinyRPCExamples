#ifndef USERINFOSERVER_INTERFACE_QUERY_SINGLE_USER_INFO_H
#define USERINFOSERVER_INTERFACE_QUERY_SINGLE_USER_INFO_H

#include "abstract_interface.h"

class QuerySingleUserInfo : public AbstractInterface {
 public:
  QuerySingleUserInfo() = default;
  ~QuerySingleUserInfo() = default;

  int run(google::protobuf::Service* request, google::protobuf::Service* response) = 0;

};

#endif
#ifndef USERINFOSERVER_INTERFACE_ABSTRACT_H
#define USERINFOSERVER_INTERFACE_ABSTRACT_H

#include <google/protobuf/service.h>
#include <memory>

class AbstractInterface {
 public:
  typedef std::shared_ptr<AbstractInterface> ptr;

  AbstractInterface() = default;
  virtual ~AbstractInterface() = 0;

  virtual int run(google::protobuf::Service* request, google::protobuf::Service* response) = 0;
};


#endif
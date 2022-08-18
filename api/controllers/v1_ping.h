#pragma once

#include <drogon/HttpController.h>

using namespace drogon;

namespace v1 {
class ping : public drogon::HttpController<ping> {
 public:
  METHOD_LIST_BEGIN

  METHOD_ADD(ping::get, "", Get);

  METHOD_LIST_END

  void get(const HttpRequestPtr &req,
           std::function<void(const HttpResponsePtr &)> &&callback) const;
};
}  // namespace v1

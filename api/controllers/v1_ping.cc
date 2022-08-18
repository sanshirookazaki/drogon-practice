#include "v1_ping.h"

using namespace v1;

// Add definition of your processing function here

void ping::get(const HttpRequestPtr &req,
               std::function<void(const HttpResponsePtr &)> &&callback) const {
  // LOG_DEBUGでコンソール上に、ログが表示される
  LOG_DEBUG << "ping get";

  Json::Value ret;

  // JSONにデータを格納
  ret["result"] = "ok";

  auto resp = HttpResponse::newHttpJsonResponse(ret);
  callback(resp);
}

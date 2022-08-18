#include "v1_posts.h"

using namespace v1;

// Add definition of your processing function here

void posts::get(const HttpRequestPtr &req,
                std::function<void(const HttpResponsePtr &)> &&callback) const {
  LOG_DEBUG << &req;

  Json::Value ret;

  auto resp = HttpResponse::newHttpJsonResponse(ret);
  callback(resp);
}

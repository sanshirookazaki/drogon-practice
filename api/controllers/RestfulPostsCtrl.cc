/**
 *
 *  RestfulPostsCtrl.cc
 *  This file is generated by drogon_ctl
 *
 */

#include "RestfulPostsCtrl.h"

#include <string>

void RestfulPostsCtrl::getOne(
    const HttpRequestPtr &req,
    std::function<void(const HttpResponsePtr &)> &&callback,
    Posts::PrimaryKeyType &&id) {
  RestfulPostsCtrlBase::getOne(req, std::move(callback), std::move(id));
}

void RestfulPostsCtrl::updateOne(
    const HttpRequestPtr &req,
    std::function<void(const HttpResponsePtr &)> &&callback,
    Posts::PrimaryKeyType &&id) {
  RestfulPostsCtrlBase::updateOne(req, std::move(callback), std::move(id));
}

void RestfulPostsCtrl::deleteOne(
    const HttpRequestPtr &req,
    std::function<void(const HttpResponsePtr &)> &&callback,
    Posts::PrimaryKeyType &&id) {
  RestfulPostsCtrlBase::deleteOne(req, std::move(callback), std::move(id));
}

void RestfulPostsCtrl::get(
    const HttpRequestPtr &req,
    std::function<void(const HttpResponsePtr &)> &&callback) {
  RestfulPostsCtrlBase::get(req, std::move(callback));
}

void RestfulPostsCtrl::create(
    const HttpRequestPtr &req,
    std::function<void(const HttpResponsePtr &)> &&callback) {
  RestfulPostsCtrlBase::create(req, std::move(callback));
}

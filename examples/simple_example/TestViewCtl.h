#pragma once
#include <drogon/HttpSimpleController.h>
using namespace drogon;
class TestViewCtl : public drogon::HttpSimpleController<TestViewCtl>
{
  public:
    virtual void asyncHandleHttpRequest(const HttpRequestPtr &req, const std::function<void(const HttpResponsePtr &)> &callback) override;
    PATH_LIST_BEGIN
    //list path definations here;
    //PATH_ADD("/path","filter1","filter2",...);
    PATH_ADD("/view");
    PATH_LIST_END
};

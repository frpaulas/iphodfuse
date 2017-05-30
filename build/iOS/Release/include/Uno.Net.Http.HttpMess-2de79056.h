// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Uno.Net.Http/0.47.13/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandler__StaticData;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// internal static class HttpMessageHandler.StaticData :95
// {
uClassType* HttpMessageHandler__StaticData_typeof();
void HttpMessageHandler__StaticData__DecrementPendingRequests_fn();
void HttpMessageHandler__StaticData__IncrementPendingRequests_fn();

struct HttpMessageHandler__StaticData : uObject
{
    static void DecrementPendingRequests();
    static void IncrementPendingRequests();
};
// }

}}}} // ::g::Uno::Net::Http

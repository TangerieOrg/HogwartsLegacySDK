#include "UAsyncLoadHelpers.hpp"
#include "UObject.hpp"
UAsyncLoadHelpers* UAsyncLoadHelpers::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AsyncLoadHelpers");
    return (UAsyncLoadHelpers*)res;
}

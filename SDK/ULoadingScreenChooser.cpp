#include "ULoadingScreenChooser.hpp"
#include "UObject.hpp"
ULoadingScreenChooser* ULoadingScreenChooser::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LoadingScreenChooser");
    return (ULoadingScreenChooser*)res;
}

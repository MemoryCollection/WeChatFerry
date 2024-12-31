#pragma once

#include <iostream>

namespace WeChatFerry {

int WxInitSDK(bool debug, int port, int index=-1);
int WxDestroySDK(int index=0);
int EnumWeChatProcess();
void clearAllSDK();

} // namespace WeChatFerry
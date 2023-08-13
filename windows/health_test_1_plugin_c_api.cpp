#include "include/health_test_1/health_test_1_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "health_test_1_plugin.h"

void HealthTest_1PluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  health_test_1::HealthTest_1Plugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}

#ifndef FLUTTER_PLUGIN_HEALTH_TEST_1_PLUGIN_H_
#define FLUTTER_PLUGIN_HEALTH_TEST_1_PLUGIN_H_

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace health_test_1 {

class HealthTest_1Plugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  HealthTest_1Plugin();

  virtual ~HealthTest_1Plugin();

  // Disallow copy and assign.
  HealthTest_1Plugin(const HealthTest_1Plugin&) = delete;
  HealthTest_1Plugin& operator=(const HealthTest_1Plugin&) = delete;

  // Called when a method is called on this plugin's channel from Dart.
  void HandleMethodCall(
      const flutter::MethodCall<flutter::EncodableValue> &method_call,
      std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result);
};

}  // namespace health_test_1

#endif  // FLUTTER_PLUGIN_HEALTH_TEST_1_PLUGIN_H_

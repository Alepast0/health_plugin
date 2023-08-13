import 'package:flutter_test/flutter_test.dart';
import 'package:health_test_1/health_test_1.dart';
import 'package:health_test_1/health_test_1_platform_interface.dart';
import 'package:health_test_1/health_test_1_method_channel.dart';
import 'package:plugin_platform_interface/plugin_platform_interface.dart';

class MockHealthTest_1Platform
    with MockPlatformInterfaceMixin
    implements HealthTest_1Platform {

  @override
  Future<String?> getPlatformVersion() => Future.value('42');
}

void main() {
  final HealthTest_1Platform initialPlatform = HealthTest_1Platform.instance;

  test('$MethodChannelHealthTest_1 is the default instance', () {
    expect(initialPlatform, isInstanceOf<MethodChannelHealthTest_1>());
  });

  test('getPlatformVersion', () async {
    HealthTest_1 healthTest_1Plugin = HealthTest_1();
    MockHealthTest_1Platform fakePlatform = MockHealthTest_1Platform();
    HealthTest_1Platform.instance = fakePlatform;

    expect(await healthTest_1Plugin.getPlatformVersion(), '42');
  });
}

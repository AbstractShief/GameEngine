add_test( PointTest.GetTest /home/debial/GameEngine/Engine/Physick/bin/coord_test [==[--gtest_filter=PointTest.GetTest]==] --gtest_also_run_disabled_tests)
set_tests_properties( PointTest.GetTest PROPERTIES WORKING_DIRECTORY /home/debial/GameEngine/Engine/Physick/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test( PointTest.SetTest /home/debial/GameEngine/Engine/Physick/bin/coord_test [==[--gtest_filter=PointTest.SetTest]==] --gtest_also_run_disabled_tests)
set_tests_properties( PointTest.SetTest PROPERTIES WORKING_DIRECTORY /home/debial/GameEngine/Engine/Physick/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test( PointTest.PointMoveTest /home/debial/GameEngine/Engine/Physick/bin/coord_test [==[--gtest_filter=PointTest.PointMoveTest]==] --gtest_also_run_disabled_tests)
set_tests_properties( PointTest.PointMoveTest PROPERTIES WORKING_DIRECTORY /home/debial/GameEngine/Engine/Physick/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test( PointTest.CollisionTest /home/debial/GameEngine/Engine/Physick/bin/coord_test [==[--gtest_filter=PointTest.CollisionTest]==] --gtest_also_run_disabled_tests)
set_tests_properties( PointTest.CollisionTest PROPERTIES WORKING_DIRECTORY /home/debial/GameEngine/Engine/Physick/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test( HitBoxTest.GetTest /home/debial/GameEngine/Engine/Physick/bin/coord_test [==[--gtest_filter=HitBoxTest.GetTest]==] --gtest_also_run_disabled_tests)
set_tests_properties( HitBoxTest.GetTest PROPERTIES WORKING_DIRECTORY /home/debial/GameEngine/Engine/Physick/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test( HitBoxTest.Collision /home/debial/GameEngine/Engine/Physick/bin/coord_test [==[--gtest_filter=HitBoxTest.Collision]==] --gtest_also_run_disabled_tests)
set_tests_properties( HitBoxTest.Collision PROPERTIES WORKING_DIRECTORY /home/debial/GameEngine/Engine/Physick/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test( CompositeHitBoxTest.AddRectTest /home/debial/GameEngine/Engine/Physick/bin/coord_test [==[--gtest_filter=CompositeHitBoxTest.AddRectTest]==] --gtest_also_run_disabled_tests)
set_tests_properties( CompositeHitBoxTest.AddRectTest PROPERTIES WORKING_DIRECTORY /home/debial/GameEngine/Engine/Physick/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set( coord_test_TESTS PointTest.GetTest PointTest.SetTest PointTest.PointMoveTest PointTest.CollisionTest HitBoxTest.GetTest HitBoxTest.Collision CompositeHitBoxTest.AddRectTest)

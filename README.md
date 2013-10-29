#SenTestCase-Async

This category expands the SenTestCase to add some macros to help testing asynchronous methods.

##Installation and usage

1. Add [`SenTestCase+Async.h`](https://github.com/mobilejazz/SenTestCase-Async/blob/master/SenTestCase%2BAsync.h) to your project.
2. Add this line to your SenTestCase subclass

  ```objective-c
  #import "SenTestCase+Async.h" 
  ```

3. That's it, you can now start using the macros.

##Available Macros

- **ASYNC_TEST_START**: Initializes a test method to be able to test asynchronous calls. Should be placed at the begining of the method.
- **ASYNC_TEST_DONE**: Let's the method know the asynchronous call has finished.
- **ASYNC_TEST_END**: Sets a timeout of 10 seconds in which the method will wait for the `ASYNC_TEST_DONE` to be called. Should be placed at the end of the method.
- **ASYNC_TEST_END_LONG_TIMEOUT**: Sets a timeout of 120 seconds in which the method will wait for the `ASYNC_TEST_DONE` to be called. Should be placed at the end of the method.

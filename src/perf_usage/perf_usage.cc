/**
 * @file perf_usage.cc
 * @author H.Y. Pei (ourlab@yeah.net)
 * @brief 
 * @version 0.1
 * @date 2022-07-02
 * 
 * @copyright Copyright (c) 2022
 *  
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *  
 *     http://www.apache.org/licenses/LICENSE-2.0
 *  
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * 
 */
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <chrono>
#include <stdlib.h>


int func1(int num) {
  std::vector<float> data;
  data.resize(num);
  for (int i = 0; i < num; i++) {
    data[i] = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
  }
  // std::sort(data.begin(), data.end());
  return 0;
}

int func2(int num) {
  std::vector<int> data;
  data.resize(num);
  for (int i = 0; i < num; i++) {
    data[i] = rand() % INT32_MAX;
  }
  // std::sort(data.begin(), data.end());
  return 0;
}

int main(int argc, char **argv) {
  std::string filename;

  filename = argv[0];
  std::cout << filename << std::endl;
  // auto start_t = std::chrono::high_resolution_clock::now();
  for (int i = 1; i < 100; i++) {
    func1(5000);
  }
  // auto end_t = std::chrono::high_resolution_clock::now();
  // std::cout << "func1: " 
  //     << std::chrono::duration_cast<std::chrono::microseconds>(
  //         end_t - start_t).count() 
  //     << std::endl;
  // start_t = std::chrono::high_resolution_clock::now();
  for (int i = 1; i < 100; i++) {
    func2(5000);
  }
  // end_t = std::chrono::high_resolution_clock::now();
  // std::cout << "func2: "
  //     << std::chrono::duration_cast<std::chrono::microseconds>(
  //         end_t - start_t).count()
  //     << std::endl;

  return 0;
}
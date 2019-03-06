/*
 * Copyright (c) 2019, NVIDIA CORPORATION.
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
 */

#include "umapparams.h"
#include "knn/knn.h"

#pragma once

namespace ML {


    class UMAP_API {

        UMAPParams *params;
        kNN *knn;

        public:

        UMAP_API(UMAPParams *params);

            void fit(float *X, int n, int d, kNN *knn, float *embeddings);

            void transform(float *X, int n, int d,
                    float *embedding, int embedding_n,
                    kNN *knn,
                    float *out);

            UMAPParams* get_params();
    };
}



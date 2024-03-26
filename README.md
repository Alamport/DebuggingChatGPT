# DebuggingChatGPT

## Problem Statement
This project aims to assess the debugging capabilities of ChatGPT, a cutting-edge language model, and its ability to explain code to developers in natural language. As software applications grow in complexity, efficient and accurate debugging tools become increasingly crucial. However, debugging can be time-consuming and requires expertise, posing challenges for developers. As a versatile language model, ChatGPT has demonstrated proficiency in answering math questions, writing code, and other tasks. However, its effectiveness in debugging scenarios remains to be explored. The goal is to systematically evaluate ChatGPT's performance in debugging diverse types of problems and code, identifying its strengths and limitations. By evaluating ChatGPT's effectiveness in debugging and code explanation tasks, this project seeks to systematize its utility in identifying and fixing bugs, potentially streamlining the debugging process and benefiting software developers.
## Proposal
The proposed approach involves systematically introducing bugs into simple functions, importing larger code segments with intentional errors, and incorporating entire services from microservice testbeds to evaluate ChatGPT's interactive debugging capabilities. By presenting flawed code to ChatGPT and engaging in a dialogue to identify the root cause of introduced issues, the goal is to assess the model's effectiveness in pinpointing bugs and understanding complex code structures. Additionally, a parallel exploration without intentionally introduced bugs will be conducted to evaluate ChatGPT's ability to explain code functionality. This interactive and iterative testing approach aims to uncover the extent of ChatGPT's debugging capabilities and its capacity to provide insightful explanations for developers, which will help forecast its potential applications in software development workflows.
## Hypothesis
As the complexity of bugs introduced in programs varies, ranging from simple syntax errors to intricate issues spanning multiple microservices, the accuracy of ChatGPT in identifying and proposing corrected code solutions is expected to decrease. This anticipated relationship is attributed to the model's limited understanding of the overall context of faulty code, coupled with a dependence on a finite training dataset. Consequently, the reduced capacity to comprehend logical correctness and code applicability is expected to result in diminished accuracy in bug identification and correction by ChatGPT.
## Experiments
To test ChatGPT’s debugging capabilities, the AI system will be provided with faulty code with varying levels of difficulty and different types of problems. Not all problems can be categorized as the same; errors can result from segmentation faults, incorrect output, or even slow performance. The code presented will start with simple functions and expand to complex situations with entire services from microservice testbeds inputted. Furthermore, to explore whether the use of ChatGPT can be beneficial in debugging microservice architectures, ChatGPT will be asked to debug a situation where one service causes issues in another.

Another aspect to be studied is how ChatGPT responds to different programming languages. To do so, different levels of languages based on popularity will be analyzed, ranging from rare languages (e.g., assembly language) to widely used languages such as Python and C++. 

Ultimately, to gauge how effective the language model is at explaining code, code used before without bugs will be sent. After these various assessments are completed, an evaluation can be made on the effectiveness of ChatGPT in debugging and providing coherent explanations.
## Results
To fully measure the degree of success with which ChatGPT debugs, there are two areas of focus: the accuracy of the suggestion and the ability to explain its suggestion. The first, ChatGPT’s reliability with debugging, is successful if it is able to find the problem and respond with a correct suggestion. In the event only one of the two were provided, the experiment would be regarded as partially correct, and none would be considered unsuccessful. With regards to the latter focus, different classifications will be created to differentiate the level at which ChatGPT explains code in natural language. 

Lastly, ChatGPT’s effectiveness as a debugging tool depends on comparisons with existing debugging tools and language models. 
## References
Research Papers
Coello, Carlos Eduardo Andino, et al. "Effectiveness of ChatGPT in Coding: A Comparative Analysis of Popular Large Language Models." Digital, vol. 4, no. 1, 2024, pp. 114-125, https://doi.org/10.3390/digital4010005.

Haque, Md & Li, Shuai. (2023). The Potential Use of ChatGPT for Debugging and Bug Fixing. EAI Endorsed Transactions on AI and Robotics. 2. e4. 10.4108/airo.v2i1.3276.


Nigar M. Shafiq Surameery, and Mohammed Y. Shakor. “Use Chat GPT to Solve Programming Bugs”. International Journal of Information Technology &Amp; Computer Engineering (IJITC) ISSN : 2455-5290, vol. 3, no. 01, Jan. 2023, pp. 17-22, doi:10.55529/ijitc.31.17.22.

Ray, Partha Pratim. "ChatGPT: A comprehensive review on background, applications, key challenges, bias, ethics, limitations and future scope." Internet of Things and Cyber-Physical Systems, vol. 3, 2023, pp. 121-154, ISSN 2667-3452, https://doi.org/10.1016/j.iotcps.2023.04.003.

Yue Liu , Thanh Le-Cong , Ratnadira Widyasari , Chakkrit Tantithamthavorn , Li Li , Xuan-Bach D. Le , David Lo, “Refining ChatGPT-Generated Code: Characterizing and Mitigating Code Quality Issues”.ACM Transactions on Software Engineering and MethodologyAccepted in January 2024. https://doi.org/10.1145/3643674.

Yunhe Feng; Sreecharan Vanam; Manasa Cherukupally; Weijian Zheng; Meikang Qiu; Haihua Chen, “Investigating Code Generation Performance of ChatGPT with Crowdsourcing Social Data” .2023 IEEE 47th Annual Computers, Software, and Applications Conference (COMPSAC). https://ieeexplore.ieee.org/document/10196869

Zhong, Li, Zilong Wang, and Jingbo Shang. "LDB: A Large Language Model Debugger via Verifying Runtime Execution Step-by-step." arXiv preprint arXiv:2402.16906 (2024).


Books
Griffith, Malachi, and Paul Leo. R Bioinformatics Cookbook: Utilize R packages for bioinformatics, genomics, data science, and machine learning, 2nd ed., Packt Publishing, 2023.

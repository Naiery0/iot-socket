# iot-socket
iot tcp/ip 소켓통신

### 필요한 설치
- vmware 설치 : 구글에 `vmware-workstation-full-17.6.3-24583834.exe(401.43 mb)` 검색 [여기로](https://www.fileeagle.com/software/662/VMware-Workstation-Pro/17.6.3)
- putty 설치 [여기로](https://www.chiark.greenend.org.uk/~sgtatham/putty/latest.html)
- ubuntu iso 설치 [여기로](https://ubuntu.com/download/desktop)

### vmware 가상머신 만들기
- custom -> 빈칸 다 ubuntu로 채우고 -> 올next

### putty 연결
- sudo apt install net-tools
- ifconfig -> 아이피 파악
- sudo apt install openssh-server
- putty에서 우분투로 연결
- sudo apt update

### 폴더 생성
- mkdir Work
- cd Work
- mkdir Socket

### 편집기 설정
- sudo nano /etc/nanorc
- set autoindent, set linenumbers, set tapsize 활성화, tapsize는 3으로 변경
- 컨트 s, 컨트 x 


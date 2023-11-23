FROM osll/mooc_linux_programming:latest

RUN apt-get update -y

RUN apt-get install -y build-essential
RUN apt-get install -y vim
RUN apt-get install -y psmisc
RUN apt-get install -y htop

WORKDIR /root
VOLUME /root

CMD ["/bin/bash"]

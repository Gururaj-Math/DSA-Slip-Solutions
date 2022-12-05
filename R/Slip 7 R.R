frame=data.frame(
  name=c("Gururaj","Sanket","tushar","akash","tejas"),
  id=c(1,2,3,4,5),
  desig=c("manager","ceo", "assistant", "assistant", "assistant")
)
print(frame)
print(frame[with(frame,order(name)),])
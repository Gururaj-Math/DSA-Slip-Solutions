v=c("a","b","a","c","d")
print("Original Vector")
print(v)
f=factor(v)
print("Factor of v")
print(f)
levels(f)[3]="e"
print(f)

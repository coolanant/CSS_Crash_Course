// desktop first
article {
  flex-basis: 24%;
  padding: 1rem;
  border: 1px solid #eee;
  border-radius: 10px;
}

@media(max-width: 850px){
  article{
    flex-basis: 48.5%
  }
}

@media(max-width: 500px){
  article{
    flex-basis: 100%
  }
}


// mobile first
article {
  flex-basis: 100%;
  padding: 1rem;
  border: 1px solid #eee;
  border-radius: 10px;
}

@media(min-width: 500px){
  article{
    flex-basis: 48.5%
  }
}

@media(min-width: 850px){
  article{
    flex-basis: 24%
  }
}

